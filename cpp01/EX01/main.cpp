/* ************************************************************************** */
/* ... (Header comments) ... */
/* ************************************************************************** */

#include "Zombie.hpp"

// Assuming the function declaration is in Zombie.hpp
Zombie* zombieHorde(int N, std::string name);

int main()
{
    const int N = 5;
    
    std::cout << "--- Starting Horde Allocation (" << N << " Zombies) ---\n";
    Zombie* horde = zombieHorde(N, "Army_Zombie");
    
    // Check for allocation failure (good practice)
    if (!horde)
        return 1; 
        
    std::cout << "--- Announcing the Horde ---\n";
    
    // Correct loop now uses 'i'
    for(int i = 0; i < N; i++)
    {
        horde[i].announce();
    }
    
    // CRITICAL FIX: Add a descriptive message and ensure a newline
    std::cout << "--- Initiating final cleanup ---\n"; 
    
    // Correct cleanup syntax for array allocation
    delete[] horde; 
    
    std::cout << "--- Cleanup Complete ---\n";
    
    return 0;
}