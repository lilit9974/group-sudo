#include <iostream>
#include <string>
int main() {
	std::cout << "Hello" << std::endl;
	std::cout << "What is your name?" << std::endl;
	std::string name1;
	std::cin >> name1;
	std::cout << "My name is - " << name1 << std::endl;
	std::cout << "How old are you?" << std::endl;
	int age1;
	std::cin >> age1;
	std::cout << "My age is - " << age1 << std::endl;
	std::cout << "Enough speaking about you." << std::endl;
	std::cout << "What is your friend's name?" << std::endl;
	std::string name2;
	std::cin >> name2;
	std::cout << "My friend's name is - " << name2 << std::endl;
	std::cout << "How old is your frined?" << std::endl;
	int age2;
	std::cin >> age2;
	std::cout << "My friend's age is - " << age2 << std::endl;
	if (age1>age2) {
		std::cout << name1 << " is older than " << name2 << std::endl;
	}
	else if (age2>age1) {
		std::cout << name2 << " is older than " << name1 << std::endl; 
	}
	else {
		std::cout << name1 << " is the same age as " << name2 << std::endl; 
	}
return 0;
}
