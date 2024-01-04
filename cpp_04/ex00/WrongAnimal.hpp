#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

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

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal(void);
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal& copy);
		WrongAnimal&	operator=(const WrongAnimal& rhs);
		std::string		getType(void) const;
		void			setType(std::string type);
		virtual void	makeSound(void) const;
};

#endif