#include "ClapTrap.hpp"

int main()
{
    std::cout << "--- 🤖 Test 1: Basic Functionality ---" << std::endl;
    ClapTrap clap("CL4P-T");

    clap.attack("Borderlands Bandit");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.attack("Psycho");

    std::cout << "\n--- 💔 Test 2: Damage and HP checks ---" << std::endl;
    ClapTrap weakling("Weakling");

    weakling.takeDamage(12);
    weakling.attack("Nothing");
    weakling.beRepaired(1);

    std::cout << "\n--- 🔋 Test 3: Energy checks ---" << std::endl;
    ClapTrap tired("TiredTrap");

    for (int i = 0; i < 10; ++i)
    {
        tired.attack("The Air");
    }
    
    tired.attack("The Wall");
    tired.beRepaired(1);

    std::cout << "\n--- 🔄 Test 4: Copy and Assignment ---" << std::endl;
    ClapTrap original("Original");
    ClapTrap copy(original);
    ClapTrap assigned("Temp");
    assigned = original;

    return 0;
}