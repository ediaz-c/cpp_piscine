#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		~Cat();
		Cat(const Cat& copy);
		Cat&	operator=(const Cat& rhs);
		virtual void	makeSound(void) const;
};

#endif