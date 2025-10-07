/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:02:27 by tlize             #+#    #+#             */
/*   Updated: 2025/10/07 14:06:20 by tlize            ###   ########.fr       */
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
		for (std::size_t j = 0; j < input.length(); j++)
    		input[j] = std::toupper(static_cast<unsigned char>(input[j]));
    	std::cout << input;
	}
	std::cout << "\n";
	return 0;
}
