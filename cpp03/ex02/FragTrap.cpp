#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;

    std::cout << "FragTrap " << _name << " is **ACTIVATED**! Let's get this party started! (HP: 100, EP: 100)" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap " << _name << " is **COPY CONSTRUCTED** (Party Clone!)." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap **COPY ASSIGNMENT** operator called for " << _name << "." << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other); 
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " is **SHUTTING DOWN** (Party's over)." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests a **POSITIVE HIGH-FIVE**! 🙌" << std::endl;
}