#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) :
    _name(name),
    hit_points(10),
    Energy_points(10),
    Attack_damage(0)
{
    std::cout<<_name<<"constructor has been called"<<std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout<<"distructor has been called"<<std::endl;
}
void ClapTrap::attack(const std::string& target)
{
    if(hit_points==0)
    {
        std::cout<<"ClapTrap "<<_name<<"IS BROKEN AND YOU CAN'T ATTACK"<<target<<std::endl;
        return;
    }
    if(Energy_points==0)
    {
        std::cout<<"ClapTrap "<<_name<<"HAS NO ENERGY LEFT TO ATTACK"<<std::endl;
        return;
    }
    
    Energy_points--;
    std::cout<<"ClapTrap "<<_name<<"attacks"<<target<<", causing"<<Attack_damage<<"points of damage!";
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points == 0) { // Ila kan mât khass yqol ma9adsh yakhod kher
        std::cout << "ClapTrap " << _name << " is already destroyed and can't take more damage." << std::endl;
        return;
    }
   if(hit_points<=amount)
   {
        hit_points=0;
        std::cout<<"ClapTrap "<<_name<<"YOU CAN'T TAKE NO DAMAGE BECAUSE YOUR HIT_PINTS ARE TOO LOW"<<std::endl;
        return;
   }
   else
   {
        hit_points-=amount;
        std::cout<<"ClapTrap "<<_name<<"YOU LOST THIS AMOUNT"<<amount<<std::endl;
        return;

   }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(hit_points == 0)
    {
        std::cout << "ClapTrap " << _name << " is **BROKEN** and cannot repair itself." << std::endl;
        return; // 👈 Khass tzid return hna
    }
    if(Energy_points == 0)
    {
        std::cout << "ClapTrap " << _name << " has **NO ENERGY** left to repair!" << std::endl;
        return; // 👈 Khass tzid return hna
    }
    
    // L'Action s7iḥa:
    hit_points += amount;
    Energy_points--; // 👈 Khass ykhsser 1 EP
    
    // L'Message (Li ma kaynsh f'code dialk)
    std::cout << "ClapTrap " << _name << " repairs itself for **" << amount 
              << "** HP. New HP: " << hit_points << "." 
              << " (Energy left: " << Energy_points << ")" << std::endl;
}