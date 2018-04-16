#include <iostream>
class Stack {
	private:
		int top = 0;
		int *arr = new int[n];
		int size() {
			return top;
		}
	public:
		unsigned int n;
//		Stack(int n, int &arr)
//			:n(n) {
//			this->arr = new int [n];
//		}
		void push(int a) {
			if (a != n) {
				arr[top] = a;
				top++;
			} else {
				std::cout << "Stack is full." << std::endl;
			}
		}
		int pop() {
			if (top != 0) {
				return arr[top];
			} else {
				std::cout << "Stack is empty." << std::endl;
			}
		}
		bool isEmpty() {
			if (size() == 0) {
				return true;
			} else {
				return false;
			}
		}
};
	
int main() {
	Stack A;
	std::cout << "Input the size of array : ";
	std::cin >> A.n;
	A.push(5);
	std::cout << A.pop() << std::endl;
	return 0;
}
