#include <iostream>
class Stack {
	private:
		int *arr;
		int top;
		unsigned int n;
	public:
		void set_N(int n) {
			this->n = n;
		}
		int get_N() {
			return n;
		}
		void set_Top(int top) {
			this->top = top;
		}
		int get_Top() {
			return top;
		}
		int size() {
			return top;
		}
		Stack(int n = 10) 
			:n(n) {
			top = -1;
			arr = new int [n];
		}
		~Stack() {
			delete []arr;
		}
		void push(int a) {
			if (size() != n-1) {
				arr[top] = a;
				top++;
			} else {
				std::cout << "Stack is full." << std::endl;
			}
		}
		int pop() {
			if (size() != -1) {
				return arr[top--];
			}
		}
		bool isEmpty() {
			if (top != -1) {
				return true;
			}; 
		}
};
	
int main() {
	int n;
	std::cout << "Input the size of stack : ";
	std::cin >> n;
	Stack A(n);
	int a;
	while (A.size() != n-1) {
		std::cout << "Input number : ";
		std::cin >> a;
		A.push(a);
	}
	while (A.size() != -1) {
		std::cout << A.pop() << " "; 
	}
	std::cout << '\n';
	return 0;
}
