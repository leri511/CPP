/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsievier <hsievier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:41:35 by hsievier          #+#    #+#             */
/*   Updated: 2023/08/21 17:32:24 by hsievier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{	
}

std::string Contact::_getInput(std::string str) const{
	std::string	input = "";
	bool valid = false;
	do{
		std::cout << str << std::flush;
		std::getline(std::cin, input);
		if (std::cin.good() && !input.empty())
			valid = true;
		else {
			std::cin.clear();
			std::cout << "Ivalid input" << std::endl;
		}
	} while (!valid);
	return input;
}

void	Contact::init(void){
	std::cin.ignore();
	this->_firstname = this->_getInput("Please enter ur first name: ");
	this->_lastname = this->_getInput("Please enter ur lastname: ");
	this->_nickname = this->_getInput("Please enter ur nickname: ");
	this->_phonenumber = this->_getInput("Please enter ur phonenumber: ");
	this->_darkestSecret = this->_getInput("Please enter ir DarkestSecret: ");
	std::cout << std::endl;
}

std::string Contact::_printlen(std::string str) const{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void	Contact::setIndex(int i){
	this->_index = i;
}

