//week11-3.cpp
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
    unordered_map<string,int> m;
    m["蔡育綸"] = 12750300;
    m["章偉臣"] = 12750794;

    cout << "蔡育綸的學號是:" << m["蔡育綸"] << endl;
    cout << "章偉臣的學號是:" << m["章偉臣"] << endl;
}