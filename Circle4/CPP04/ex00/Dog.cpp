#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(std::string type)
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = type;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &obj)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = obj.getType();
}

Dog &Dog::operator=(const Dog &obj)
{
	if (this == &obj)
		return (*this);
    std::cout << "Dog assinment constructor called" << std::endl;
    this->type = obj.getType();
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Dog make sound 'Wal Wal'" << std::endl;
}