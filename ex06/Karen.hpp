/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:13:18 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/12 11:51:24 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Karen
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public:
		Karen();
		~Karen();
		void complain(std::string level);
};