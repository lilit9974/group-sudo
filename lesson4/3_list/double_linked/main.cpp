#include <iostream>
#include "list.h"


int main() {
    List list;
    for(int i = 0; i < 5; ++i) {
        list.pushFront(i);
        list.pushEnd(i);
    }
    list.print();
    std::cout << "5 - " << list.find(5) << std::endl;
    std::cout << "2 - " << list.find(2) << std::endl;
    std::cout << "size = " << list.size() << std::endl;
    for(int size = list.size(), i = 0; i < size; ++i) {
    	std::cout << list.popFront() << std::endl;
    }
    std::cout << list.popEnd() << std::endl;
    std::cout << list.popEnd() << std::endl;
    return 0;
}
