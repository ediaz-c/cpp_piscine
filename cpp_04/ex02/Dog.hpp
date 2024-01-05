#ifndef DOG_HPP
# define DOG_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain*	_brain;
	public:
		Dog(void);
		~Dog();
		Dog(const Dog& copy);
		Dog&	operator=(const Dog& rhs);
		virtual void	makeSound(void) const;
		void			printIdeas(void) const;
		void			setIdeas(std::string idea, int index);
		std::string		getIdeas(int index) const;
};

#endif