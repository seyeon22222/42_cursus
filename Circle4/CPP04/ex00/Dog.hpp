#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog(void);
    Dog(std::string type);
    ~Dog(void);
    Dog(const Dog &obj);
    Dog &operator=(const Dog &obj);
    void makeSound(void) const;
};

#endif