/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 10:43:00 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/12 11:09:33 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Incorect number of arguments: <filename> <str1> <str2>" << std::endl;
		return -1;
	}
	else
	{
    std::ifstream    ifs;
    std::ofstream    ofs;
    std::string fname = argv[1];
    std::string        buf = "";
    ifs.open(argv[1], std::ifstream::in);
    std::string        str1 = argv[2];
    std::string        str2 = argv[3];
    if (str1.length() == 0 || str2.length() == 0)
        return (-1);
    ofs.open(fname.append(".replace").c_str(), std::ifstream::out);
    char c = ifs.get();
    while (ifs.good())
    {
        buf.insert(buf.end(), c);
        c = ifs.get();
    }
    size_t pos = 0;
    while((pos = buf.find(str1, 0)) != buf.npos)
    {
        buf = buf.erase(pos, str1.length());
        buf.insert(pos, str2);
    }
    ofs << buf;
    ifs.close();
    ofs.close();
	}
}