/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:20:02 by erick             #+#    #+#             */
/*   Updated: 2023/10/16 15:52:10 by erick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_HPP
# define INCLUDES_HPP

# include <iostream>
# include <iomanip>
# include "color.hpp"

# define FIRSTNAME BGreen"Write your first name: " Color_off
# define LASTNAME BGreen"Write your last name: " Color_off
# define NICKNAME BGreen"Write your nickname: " Color_off
# define PHONE BGreen"Write your phone number: " Color_off
# define SECRET BGreen"Write your darkest secret: " Color_off

# define WELCOME	BIBlue "************************************************************************\n" \
					"*                                                                      *\n" \
					"* ######                                 ######                        *\n" \
					"* #     # #    #  ####  #    # ######    #     #  ####   ####  #    #  *\n" \
					"* #     # #    # #    # ##   # #         #     # #    # #    # #   #   *\n" \
					"* ######  ###### #    # # #  # #####     ######  #    # #    # ####    *\n" \
					"* #       #    # #    # #  # # #         #     # #    # #    # #  #    *\n" \
					"* #       #    # #    # #   ## #         #     # #    # #    # #   #   *\n" \
					"* #       #    #  ####  #    # ######    ######   ####   ####  #    #  *\n" \
					"*                                                                      *\n" \
					"************************************************************************\n" Color_off


# define TABLE	BIBlue "|**********|**********|**********|**********|\n" \
				"|  index   |first name|last name |nick name |\n" \
				"|**********|**********|**********|**********|\n" Color_off

# define COMMANDS BWhite"Write a command [ADD], [SEARCH], [EXIT] \n" Color_off
# define PT "."
# define PIPE BIBlue "|" Color_off
# define BR BIBlue "|----------|----------|----------|----------|\n"
#endif