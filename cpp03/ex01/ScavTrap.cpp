#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;

    std::cout << "ScavTrap " << _name << " is **CONSTRUCTED** and ready to guard the gate! (HP: 100, EP: 50)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap " << _name << " is **COPY CONSTRUCTED**." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap **COPY ASSIGNMENT** operator called for " << this->_name << "." << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other); 
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " is **DESTROYED** (End of shift)." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_hitPoints == 0)
    {
        std::cout << "ScavTrap " << _name << " is broken and can't attack!" << std::endl;
        return;
    }
    if (_energyPoints == 0)
    {
        std::cout << "ScavTrap " << _name << " is out of energy and can't attack!" << std::endl;
        return;
    }

    _energyPoints--;
    std::cout << "ScavTrap " << _name << " attacks " << target 
              << " with a powerful shield bash, causing " << _attackDamage << " points of damage! "
              << "(Energy left: " << _energyPoints << ")" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in **Gate Keeper mode**. The gate is secure!" << std::endl;
}