#include "ClapTrap.hpp"

int main ()
{
ClapTrap hero("Hero-Bender  ");
    ClapTrap villain("Scrappy    ");

    // L'Hero kay'attacki 3 marrat (EP: 10 -> 7)
    hero.attack("Scrappy");
    hero.attack("Scrappy");
    hero.attack("The ceiling");

    // Scrappy kayakhod damage
    villain.takeDamage(5); // HP: 10 -> 5
    
    // Scrappy kaytsallah (EP: 10 -> 9 | HP: 5 -> 8)
    villain.beRepaired(3);
    for(int i=0;i<7;i++)
    {
        hero.attack("bob");
    }
    villain.attack("di");
}