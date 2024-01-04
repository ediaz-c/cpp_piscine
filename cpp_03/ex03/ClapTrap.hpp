#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# define Color_off "\033[0m"       //Color off
# define BIBlack "\033[1;90m"      //Black
# define BIRed "\033[1;91m"        //Red
# define BIGreen "\033[1;92m"      //Green
# define BIYellow "\033[1;93m"     //Yellow
# define BIBlue "\033[1;94m"       //Blue
# define BIPurple "\033[1;95m"     //Purple
# define BICyan "\033[1;96m"       //Cyan
# define BIWhite "\033[1;97m"      //White

# include <iostream>

class	ClapTrap
{
	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& copy);
		ClapTrap&		operator=(const ClapTrap& rhs);
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string		getName(void) const;
		int				getHitPoints(void) const;
		int				getEnergyPoints(void) const;
		int				getAttackDamage(void) const;
		void			setName(const std::string& name);
		void			setHitPoints(int hitPoints);
		void			setEnergyPoints(int energyPoints);
		void			setAttackDamage(int attackDamage);
};

std::ostream&	operator<<(std::ostream& os, const ClapTrap& clapTrap);

#endif