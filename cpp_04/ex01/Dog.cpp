#include "Dog.hpp"

Dog::Dog(void): Animal(), _brain(new Brain())
{
	std::cout << BIBlue << "Dog constructor called." << Color_off << std::endl;
	this->setType("Dog");
}

Dog::~Dog()
{
	std::cout << BIBlue << "Dog destructor called." << Color_off << std::endl;
	delete this->_brain;
}

Dog::Dog(const Dog& copy): Animal(copy), _brain(new Brain(*copy._brain))
{
	std::cout << BIBlue << "Dog copy constructor called." << Color_off << std::endl;
	*this = copy;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	std::cout << BIBlue << "Dog assignation operator called." << Color_off << std::endl;
	if (this != &rhs)
	{
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
		this->setType(rhs.getType());
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << BIBlue << "Woof!" << Color_off << std::endl;
}

void	Dog::printIdeas(void) const
{
	std::cout << BIBlue << "Dog's ideas:" << Color_off << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << this->_brain->getIdea(i) << std::endl;
}

void	Dog::setIdeas(std::string idea, int index)
{
	int	i = index - 1;
	if (i >= 0 && i <= 100)
		this->_brain->setIdea(i, idea);
	else
		exit(1);
}

std::string	Dog::getIdeas(int index) const
{
	int	i = index - 1;
	if (i >= 0 && i <= 100)
		return (this->_brain->getIdea(i));
	else
		exit(1);
}