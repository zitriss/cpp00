/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:02:27 by tlize             #+#    #+#             */
/*   Updated: 2025/09/01 16:00:12 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;		
	}
	for (int i = 1; argv[i]; i ++)
	{
		std::string input = argv[i];
		for (char &c : input)
        	c = std::toupper(static_cast<unsigned char>(c));
    	std::cout << input;
	}
	std::cout << "\n";
	return 0;
}
