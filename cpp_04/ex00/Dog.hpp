#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		~Dog();
		Dog(const Dog& copy);
		Dog&	operator=(const Dog& rhs);
		virtual void	makeSound(void) const;
};

#endif