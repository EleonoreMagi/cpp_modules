/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 02:09:27 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/06 02:15:09 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::action() const
{

    std::ofstream file((getTarget() + "_shruberry").c_str());
    if (!file.is_open())
    {
        std::cout << "Error: can't open the file." << std::endl;
        return ;
    }
    file << "\n                     - - -\n"
            "                   -        -  -     --    -\n"
            "                -                 -         -  -\n"
            "                                -\n"
            "                               -                --\n"
            "               -          -            -              -\n"
            "               -            '-,        -               -\n"
            "               -              'b      *\n"
            "                -              '$    #-                --\n"
            "               -    -           $:   #:               -\n"
            "             --      -  --      *#  @):        -   - -\n"
            "                          -     :@,@):   ,-**:'   -\n"
            "              -      -,         :@@*: --**'      -   -\n"
            "                       '#o-    -:(@'-@*\"'  -\n"
            "               -  -       'bq,--:,@@*'   ,*      -  -\n"
            "                          ,p$q8,:@)'  -p*'      -\n"
            "                   -     '  - '@@Pp@@*'    -  -\n"
            "                    -  - --    Y7'.'     -  -\n"
            "                              :@):.\n"
            "                             .:@:'.\n"
            "                           .::(@:.      -Sam Blumenstein-";
    file.close();
}

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("ShrubberyCreation", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : Form("ShrubberyCreation", false, 145, 137, target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& a)
    : Form(a) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm&)
{
    return *this;
}