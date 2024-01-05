#include "Cat.hpp"

Cat::Cat(void): Animal(), _brain(new Brain())
{
	std::cout << BIBlue << "Cat constructor called." << Color_off << std::endl;
	this->setType("Cat");
}

Cat::~Cat()
{
	std::cout << BIBlue << "Cat destructor called." << Color_off << std::endl;
	delete this->_brain;
}

Cat::Cat(const Cat& copy) : Animal(copy), _brain(new Brain(*copy._brain))
{
	std::cout << BIBlue << "Cat copy constructor called." << Color_off << std::endl;
	*this = copy;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	std::cout << BIBlue << "Cat assignation operator called." << Color_off << std::endl;
	if (this != &rhs)
	{
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
		this->setType(rhs.getType());
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << BIBlue << "Meow!!" << Color_off << std::endl;
}

void	Cat::printIdeas(void) const
{
	std::cout << BIBlue << "Cat's ideas:" << Color_off << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << this->_brain->getIdea(i) << std::endl;
}

void	Cat::setIdeas(std::string idea, int index)
{
	int	i = index - 1;
	if (i >= 0 && i <= 100)
		this->_brain->setIdea(i, idea);
	else
		exit(1);
}

std::string	Cat::getIdeas(int index) const
{
	int	i = index - 1;
	if (i >= 0 && i <= 100)
		return (this->_brain->getIdea(i));
	else
		exit(1);
}