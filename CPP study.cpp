#include "CPP study.h"


void basic_output() {
    int age = 20;
    std::cout << "I'm " << age << " years old" << std::endl;
}

void basic_input() {
    int age;
    std::cout << "How old are you then? ";
    std::cin >> age;
    std::cout << "You a " << age << " years old fossil." << std::endl;
}

void use_auto() {
    auto max_students = 50;
    auto class_average = 88.5;
    
    std::cout << "Max students: " << max_students << std::endl;
    std::cout << "Class average: " << class_average << std::endl;
}

int main() {
    basic_output();
    basic_input();
    use_auto();
}