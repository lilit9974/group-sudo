#include <iostream>
#include <string>
int main() {
	struct Person {
		std::string name;
		int age;
		std::string gender;
		bool status;
	};	
	Person lilit;
	lilit.name = "Lilit Melkumian";
	lilit.age = 19;
	lilit.gender = "female";
	lilit.status = "student";

	Person hrach;
	hrach.name = "Hrach Gevorgian";
	hrach.age = 21;
	hrach.gender = "male";
	hrach.status = "student";

	Person armen;
	armen.name = "Armen Abrahamian";
	armen.age = 0;
	armen.gender = "male";
	armen.status = "student";

	Person arpine;
	arpine.name = "Arpine Harutyunian";
	arpine.age = 23;
	arpine.gender = "female";
	arpine.status = "not student";

	Person ani;
	ani.name = "Ani Hakobian";
	ani.age = 19;
	ani.gender = "female";
	ani.status = "student";

	Person artur;
	artur.name = "Artur Gasparian";
	artur.age = 0;
	artur.gender = "male";
	artur.status = "not student";

	Person mikayel;
	mikayel.name = "Mikayel Margarian";
	mikayel.age = 18;
	mikayel.gender = "male";
	mikayel.status = "student";

	Person tigran;
	tigran.name = "Tigran Hovhannisian";
	tigran.age = 21;
	tigran.gender = "male";
	tigran.status = "student";

	Person nvard;
	nvard.name = "Nvard Harutyunian";
	nvard.age = 19;
	nvard.gender = "female";
	nvard.status = "student";

	Person mariam;
	mariam.name = "Mariam Karapetian";
	mariam.age = 22;
	mariam.gender = "female";
	mariam.status = "student";

	Person edgar;
	edgar.name = "Edgar Grigoryan";
	edgar.age = 17;
	edgar.gender = "male";
	edgar.status = "not student";
	
	Person sasha;
	sasha.name = "Alexandr Avagian";
	sasha.age = 19;
	sasha.gender = "male";
	sasha.status = "student";

	Person nona;
	nona.name = "Nonna Musayelian";
	nona.age = 19;
	nona.gender = "female";
	nona.status = "student";

	std::cout << "Hello. Welcome to Instigate Mobile. We are very glad to see you in our office. Here is the list of our members." << '\n' <<'\n' << "1." << lilit.name << '\n' << "2." << hrach.name << '\n' <<  "3." << armen.name << '\n' << "4." << arpine.name << '\n' << "5." << ani.name << '\n' << "6." << artur.name  << '\n' << "7." << mikayel.name << '\n' << "8." << tigran.name << '\n' << "9." << nvard.name << '\n' << "10."  << mariam.name << '\n' << "11." << edgar.name << '\n' << "12." << sasha.name << '\n' << "13." << nona.name << '\n' << '\n' << "Who do you want to know about? Enter his/her name : ";
	std::string n;
	std::cin >> n;
	std::cout << '\n';
	
	if (n == "Lilit") {
		std::cout << "Here is all about Lilit." << '\n';
		std::cout << lilit.name << '\n' << lilit.age << " years old" << '\n' << lilit.gender << '\n' << lilit.status << '\n';
	}
	if (n == "Hrach") {
	std::cout << "Here is all about Hrach." << '\n' << '\n';
		std::cout << hrach.name << '\n' << hrach.age << " years old" << '\n' << hrach.gender << '\n' << hrach.status << '\n';
	}
	if (n == "Armen") {
		std::cout << "Here is all about Armen." << '\n' << '\n';
		std::cout << armen.name << '\n' << armen.age << " years old" << '\n' << armen.gender << '\n' << armen.status << '\n';
	}
	if (n == "Arpine") {
		std::cout << "Here is all about Arpine." << '\n' << '\n';
		std::cout << arpine.name << '\n' << arpine.age << " years old" << '\n' << arpine.gender << '\n' << arpine.status << '\n';
	}
	if (n == "Ani") {
		std::cout << "Here is all about Ani." << '\n' << '\n';
		std::cout << ani.name << '\n' << ani.age << " years old" << '\n' << ani.gender << '\n' << ani.status << '\n';
	}
	if (n == "Artur") {
		std::cout << "Here is all about Artur." << '\n' << '\n';
		std::cout << artur.name << '\n' << artur.age << " years old" << '\n' << artur.gender << '\n' << artur.status << '\n';
	}
	if (n == "Mikayel") {
		std::cout << "Here is all about Mikayel." << '\n' << '\n';
		std::cout << mikayel.name << '\n' << mikayel.age << " years old" << '\n' << mikayel.gender << '\n' << mikayel.status << '\n';
	}
	if (n == "Tigran") {
		std::cout << "Here is all about Tigran." << '\n' << '\n';
		std::cout << tigran.name << '\n' << tigran.age << " years old" << '\n' << tigran.gender << '\n' << tigran.status << '\n';
	}
	if (n == "Nvard") {
		std::cout << "Here is all about Nvard." << '\n' << '\n';
		std::cout << nvard.name << '\n' << nvard.age << " years old" << '\n' << nvard.gender << '\n' << nvard.status << '\n';
	}
	if (n == "Mariam") {
		std::cout << "Here is all about Mariam." << '\n' << '\n';
		std::cout << mariam.name << '\n' << mariam.age << " years old" << '\n' << mariam.gender << '\n' << mariam.status << '\n';
	}
	if (n == "Edgar") {
		std::cout << "Here is all about Edgar." << '\n' << '\n';
		std::cout << edgar.name << '\n' << edgar.age << " years old" << '\n' << edgar.gender << '\n' << edgar.status << '\n';
	}
	if (n == "Sasha") {
		std::cout << "Here is all about Sasha." << '\n' << '\n';
		std::cout << sasha.name << '\n' << sasha.age << " years old" << '\n' << sasha.gender << '\n' << sasha.status << '\n';
	}
	if (n == "Nonna") {
		std::cout << "Here is all about Arpine." << '\n' << '\n';
		std::cout << nona.name << '\n' << nona.age << " years old" << '\n' << nona.gender << '\n' << nona.status << '\n';
	}
	if ((n != "Lilit") && (n != "Hrach") && (n != "Artur") && (n != "Arpine") && (n != "Ani") && (n != "Armen") && (n != "Mikayel") && (n != "Tigran") && (n != "Nvard") && (n != "Mariam") && (n != "Edgar") && (n != "Sasha") && (n != "Nonna")) { 
		std::cout << "Sorry. We don't have any member with that name." << '\n'; 
	}

	return 0;

}


	
