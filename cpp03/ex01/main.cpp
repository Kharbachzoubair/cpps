#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "--- 🧪 Test 1: Inheritance and Constructor Chaining ---" << std::endl;
    ScavTrap guard("Sentinel");

    std::cout << "\n--- 🦾 Test 2: ScavTrap Capabilities and New Attributes ---" << std::endl;
    
    guard.attack("Invader"); 

    guard.takeDamage(10);
    guard.beRepaired(5);

    guard.guardGate();

    std::cout << "\n--- ⚡ Test 3: Energy Exhaustion (50 EP) ---" << std::endl;
    ScavTrap runner("Marathon");
    
    for (int i = 0; i < 51; ++i)
    {
        runner.attack("The Distance");
    }

    std::cout << "\n--- 🔄 Test 4: Copy and Assignment ---" << std::endl;
    ScavTrap original_scav("OG_Scav");
    ScavTrap copied_scav(original_scav);
    
    std::cout << "\n--- 🔚 Destruction Chaining ---" << std::endl;

    return 0;
}