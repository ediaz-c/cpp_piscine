#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# define Color_off "\033[0m"       //Color off
# define BIBlack "\033[1;90m"      //Black
# define BIRed "\033[1;91m"        //Red
# define BIGreen "\033[1;92m"      //Green
# define BIYellow "\033[1;93m"     //Yellow
# define BIBlue "\033[1;94m"       //Blue
# define BIPurple "\033[1;95m"     //Purple
# define BICyan "\033[1;96m"       //Cyan
# define BIWhite "\033[1;97m"      //White

class AAnimal
{
	protected:
		std::string _type;
	public:
		AAnimal(void);
		virtual ~AAnimal();
		AAnimal(const AAnimal& copy);
		AAnimal&	operator=(const AAnimal& rhs);
		std::string		getType(void) const;
		void			setType(std::string type);
		virtual void	makeSound(void) const = 0;
};

#endif