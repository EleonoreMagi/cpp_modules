/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:05:21 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 19:09:42 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define N_ANIMALS 10

int main(void)
{
	//Animal animal();
    Dog dog;
    dog.makeSound();
	
	std::cout << std::endl;
	std::cout << "-------------------------------------\n";
	{
		std::cout << "Check deep copy of Dog class using copy constructor:\n" << std::endl;
		Dog *dogA = new Dog;

		dogA->setBrainIdeas(1, "Feed me, please!");
		dogA->setBrainIdeas(5, "Let's go for a walk!");
		std::cout << dogA->getBrainIdeas(5) << std::endl;
		dogA->setBrainIdeas(101, "What's that black thing over there?!");

		std::cout << std::endl;
		Dog *dogB = new Dog(*dogA);

		dogA->setBrainIdeas(5, "The wind is awsome!");
		std::cout << dogB->getBrainIdeas(5) << std::endl;

		std::cout << std::endl;

		delete dogA;
		delete dogB;
	}
	std::cout << std::endl;
	std::cout << "-------------------------------------\n";

	Cat cat;
    Cat cat2;
    cat.setBrainIdeas(0, "str");
    cat2 = cat;
    std::cout << "cat brain ideas 0: " << cat.getBrainIdeas(0) << std::endl;
    std::cout << "cat2 brain ideas 0: " << cat2.getBrainIdeas(0) << std::endl;
    std::cout << "cat brain ideas 0 addres: " << &(cat.getBrainIdeas(0)) << std::endl;
    std::cout << "cat2 brain ideas 0 addres: " << &(cat2.getBrainIdeas(0)) << std::endl;

	std::cout << std::endl;
	std::cout << "-------------------------------------\n";

    Cat cat3;
    cat3.setBrainIdeas(0, "str");
    Cat cat4(cat3);
    std::cout << "cat3 brain ideas 0: " << cat3.getBrainIdeas(0) << std::endl;
    std::cout << "cat4 brain ideas 0: " << cat4.getBrainIdeas(0) << std::endl;
    std::cout << "cat3 brain ideas 0 addres: " << &(cat3.getBrainIdeas(0)) << std::endl;
    std::cout << "cat4 brain ideas 0 addres: " << &(cat4.getBrainIdeas(0)) << std::endl;
	
	std::cout << std::endl;
	std::cout << "-------------------------------------\n";
	return (0);
}