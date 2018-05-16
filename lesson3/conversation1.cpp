#include <iostream>
#include <string>
	void howareyoufine() {
		std::cout << "I am fine too. Thank you. Do you have much work today? " << std::endl;
	}
	
	void howareyoubad() {
		std::cout << "Had anything happened with you? " << std::endl;
	}
	
	void howareyouanswer() {
		std::cout << "Everything will be nice, don't worry about that. Do you have much work today? " << std::endl; 
	}
	
	void invitation() {
		std::cout << "I want to invite you to go anywhere. What about you? " << std::endl;
	}

	void place() {
		std::cout << "Well, where would you like to go: concert, theatre, restaurant or somewhere else? " << std::endl;
	}

	void waiting1() {
		std::cout << "Nice, just I am very hungry, I will wait you at 8 o'clock near your office. " << std::endl;
	}

	void waiting2() {
		std::cout << "Well, I will be in the park at 8 o'clock. " << std::endl;
	}

	void finish() {
		std::cout << "Well, That's a bargain. " << std::endl;
	}
	
	void bye() {
		std::cout << "Bye. " << std::endl;
	}
	
	int main() {
		std::cout << "Hello " << std::endl;
		std::string a;
		std::cin >> a;
		std::cout << "How are you? " << std::endl;
		std::cout << "Write 1 or 2: 1-I am fine thank you, and you? 2-I am so so. " << std::endl;
		int b;
		std::cin >> b;
		if (b == 1) {
			howareyoufine();
		} else if (b == 2) {
			howareyoubad();
		std::cout << "Write 1 or 2: 1- No, don't worry. 2-Yes, I will tell you later. " <<std::endl;
		int c;
		std::cin >> c;
		if (c == 1 || c == 2) {
			howareyouanswer();
			}
		}
		std::cout << "Write 1 or 2: 1-Yes, but why do you ask? 2-No, why do you ask? " << std::endl;
		int d;
		std::cin >> d;
		if (d == 1 || d == 2) {
			invitation();
		}
		std::cout << "Write 1 or 2: 1-I will come with great pleasre. 2-I am busy today, but I will come. " << std::endl;
		int e;
		std::cin >> e;
		if (e == 1 || e == 2) {
			place();
		}
		std::cout << "Write 1 or 2: 1-Let's go to the restaurant. 2-I would like to go to walking. " << std::endl;
		int f;
		std::cin >> f;
		if (f == 1) {
			waiting1(); 
		} else if (e == 2) {
			waiting2();
		}
		std::cout << "Write 1 or 2: 1-I will definitely come. 2-I'll be glad to see you again. " << std::endl;
		int g;
		std::cin >> g;
		if (g == 1 || g == 2) {
			finish();
		}
		std::cout << "Write 1 or 2: 1-See you soon. 2-Bye. " << std::endl;
		int h;
		std::cin >> h;
		if (h == 1 || h == 2) {
			bye();
		}
	return 0;
	}
			
			 
	
