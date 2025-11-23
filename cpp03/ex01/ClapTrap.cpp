#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : 
    _hitPoints(10), 
    _energyPoints(10), 
    _attackDamage(0)
{
    std::cout << "ClapTrap **DEFAULT** constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) :
    _name(name),
    _hitPoints(10),
    _energyPoints(10),
    _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " is **CONSTRUCTED** with " 
              << _hitPoints << " HP and " << _energyPoints << " Energy." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : 
    _name(other._name),
    _hitPoints(other._hitPoints),
    _energyPoints(other._energyPoints),
    _attackDamage(other._attackDamage)
{
    std::cout << "ClapTrap " << _name << " is **COPY CONSTRUCTED**." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "ClapTrap **COPY ASSIGNMENT** operator called for " << _name << "." << std::endl;
    if (this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " is **DESTROYED**." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is **out of Hit Points** and can't attack!" << std::endl;
        return;
    }
    if (_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is **out of Energy Points** and can't attack!" << std::endl;
        return;
    }

    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target 
              << ", causing " << _attackDamage << " points of damage! "
              << "(Energy left: " << _energyPoints << ")" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " has already been destroyed (0 HP)! Cannot take more damage." << std::endl;
        return;
    }

    if (amount >= _hitPoints)
    {
        _hitPoints = 0;
        std::cout << "ClapTrap " << _name << " takes **" << amount << " points of damage**! It has been destroyed!" << std::endl;
    }
    else
    {
        _hitPoints -= amount;
        std::cout << "ClapTrap " << _name << " takes **" << amount << " points of damage**! "
                  << "(HP left: " << _hitPoints << ")" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is **out of Hit Points** and can't repair itself!" << std::endl;
        return;
    }
    if (_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is **out of Energy Points** and can't repair itself!" << std::endl;
        return;
    }

    _energyPoints--;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " repairs itself, regaining **" << amount << " Hit Points**! "
              << "(HP left: " << _hitPoints << ", Energy left: " << _energyPoints << ")" << std::endl;
}
