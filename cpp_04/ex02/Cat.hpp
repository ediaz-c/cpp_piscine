#ifndef CAT_HPP
# define CAT_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain*	_brain;
	public:
		Cat(void);
		~Cat();
		Cat(const Cat& copy);
		Cat&	operator=(const Cat& rhs);
		virtual void	makeSound(void) const;
		void			printIdeas(void) const;
		void			setIdeas(std::string idea, int index);
		std::string		getIdeas(int index) const;
};

#endif