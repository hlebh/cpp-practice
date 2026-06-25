// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>
#include <cstdio>

int add(int a, int b)
{
    return a+b;
}

int main()
{
    int age;
    std::cout << "What is you age?" << std::endl;
    std::cin >> age;
    std::cout << "You are " << age << " years old";
    return 0;
}

