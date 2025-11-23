#include "ClapTrap.hpp"
#include "ScavTrap.hpp" 
#include "FragTrap.hpp"

int main()
{
    std::cout << "--- 🚀 Test 1: FragTrap Construction Chain ---" << std::endl;
    FragTrap party_bot("Fragger");

    std::cout << "\n--- 🔥 Test 2: New Stats and High Fives ---" << std::endl;

    party_bot.highFivesGuys(); 

    party_bot.attack("Hostile Entity");
    
    party_bot.takeDamage(20);
    party_bot.beRepaired(10);
    
    std::cout << "\n--- 🔋 Test 3: Energy Endurance (100 EP) ---" << std::endl;
    
    FragTrap big_battery("MarathonBot");

    for (int i = 0; i < 101; ++i)
    {
        big_battery.attack("The Air");
    }

    big_battery.attack("The Ground");

    std::cout << "\n--- 🔚 Destruction Chain ---" << std::endl;

    return 0;
}
