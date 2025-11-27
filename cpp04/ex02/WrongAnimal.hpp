#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal {
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& other);
    ~WrongAnimal(); // NOT virtual - Leads to memory leak risk

    WrongAnimal& operator=(const WrongAnimal& other);

    void makeSound() const; // NOT virtual - Leads to static binding
    const std::string& getType() const;
};

#endif