/// week10-3.cpp
#include <iostream>
#include <string>
using namespace std;

class Cat {
public:
    Cat(string _name) { ///小心底線(_) 前面不能寫 void
        name = _name;
    }
    string name;
    void print() {
        cout << "I am a cat. My name is " << name << ".\n";
    }
};

int main()
{
    Cat cat1("小花"), cat2("小白");
    cat1.print();
    cat2.print();
}