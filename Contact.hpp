/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsievier <hsievier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:35:18 by hsievier          #+#    #+#             */
/*   Updated: 2023/08/21 16:44:41 by hsievier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _phonenumber;
		std::string _darkestSecret;
		int _index;

		std::string _printlen(std::string str) const;
		std::string _getInput(std::string str) const;
	
	public:
		Contact();
		~Contact();
		void init(void);
		void view(int index) const;
		void display(int index) const;
		void setIndex(int i);
};

# endif