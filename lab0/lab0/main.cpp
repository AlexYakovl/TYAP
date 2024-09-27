#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string text;
    basic_string <char>::size_type size, length;
    ifstream in("test.txt");
    string str("Hello world");


    if (in.is_open())
    {
        while (getline(in, text))
        {
            in << text;
        }
    }
    std::cout << text << std::endl;




    length = text.length();
    cout << text.length();

    /*for (int i = 0; i < razmer - 4; i++) {
        cout << text[i];
    }
    
    for (int i = 0; i < razmer; i++) {
        if ((text[i] == '/' && text[i+1] == ' * ') || (text[i] == ' * ' && text[i + 1] == ' / ')) {
            cout << "Got it" << std::endl;

        };

    };
       */


    return 0;
}
