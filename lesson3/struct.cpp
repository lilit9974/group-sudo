#include <iostream>
#include <string>
int main() {
        struct Person {
                std::string firstname;
		std::string lastname;
                int age;
                std::string gender;
                bool status;
                float weight;
                std::string family;
                std::string prefix;
        };
	Person massiv[13];
        massiv[0] = {"Lilit", "Melkumian", 19, "female", "student", 48.5, "unmarried", "Miss"};
        massiv[1] = {"Hrach", "Gevorgian", 21, "male", "student", 69.2, "unmarried", "Mr"};
        massiv[2] = {"Armen", "Abrahamian", 20, "male", "student", 70, "unmarried", "Mr"};
        massiv[3] = {"Arpine", "Harutyunian", 23, "female", "student", 49, "unmarried", "Miss"};
        massiv[4] = {"Ani", "Hakobian", 19, "female", "student", 52, "unmarried", "Miss"};
        massiv[5] = {"Artur", "Gasparian", 25, "male", "not student", 65, "unmarried", "Mr"};
        massiv[6] = {"Mikael", "Margarian", 17, "male", "student", 50, "unmarried", "Mr"};
        massiv[7] = {"Tigran", "Hovhannisian", 20, "male", "student", 75, "unmarried", "Mr"};
        massiv[8] = {"Nvard", "Harutyunian", 19, "female", "student", 52, "unmarried", "Miss"};
        massiv[9] = {"Mariam", "Karapetian", 22, "female", "student", 53, "unmaried", "Miss"};
        massiv[10] = {"Edgar", "Grigorian", 16, "male", "not student", 58, "unmaried", "Mr"};
        massiv[11] = {"Alexandr", "Avagian", 19, "male", "student", 62, "unmaried", "Mr"};
        massiv[12] = {"Nonna", "Muselian", 19, "female", "student", 53, "unmaried", "Miss"};

        std::cout << "Hello. Welcome to Instigate Mobile. We are very glad to see you in our office. Here is the list of our members." << '\n' <<'\n';
	for (int i=0; i<13; i++) {
		std::cout << i+1 << ". " << massiv[i].firstname << " " << massiv[i].lastname << std::endl; 
	}
	
	std::cout << '\n';
	std::cout << "Input the one of this names : ";
        std::string n;
        std::cin >> n;
        std::cout << '\n';
	
	bool a = false;
	for (int i=0; i<13; i++) {
		if (n == massiv[i].firstname) {
			a = true;
			std::cout << massiv[i].prefix << " " << massiv[i].firstname << " " << massiv[i].lastname << '\n' << "Age - " << massiv[i].age << '\n' << "Gender - " << massiv[i].gender << '\n' << "Status - " << massiv[i].status << '\n' << "Weight - " << massiv[i].weight << '\n' << "Family status - " << massiv[i].family << '\n';
		} 
	}
	if (a = false) {
		std::cout << "Sorry. We don't have any member with that name." << std::endl;
	}
	return 0;
}
