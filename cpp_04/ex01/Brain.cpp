#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << BIBlue << "Brain constructor called." << Color_off << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "Idea number " + std::to_string(i + 1) + ".";
}

Brain::~Brain()
{
	std::cout << BIBlue << "Brain destructor called." << Color_off << std::endl;
}

Brain::Brain(const Brain& copy)
{
	std::cout << BIBlue << "Brain copy constructor called." << Color_off << std::endl;
	*this = copy;
}

Brain&	Brain::operator=(const Brain& rhs)
{
	std::cout << BIBlue << "Brain assignation operator called." << Color_off << std::endl;
	if (this != &rhs)
		for (int i = 0; i < 100; i++)
			this->setIdea(i, rhs.getIdea(i));
	return (*this);
}

// Methods
std::string	Brain::getIdea(int index) const
{
	return (this->_ideas[index]);
}

void	Brain::setIdea(int index, std::string idea)
{
	this->_ideas[index] = idea;
}