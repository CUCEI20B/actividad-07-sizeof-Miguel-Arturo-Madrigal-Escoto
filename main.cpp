#include <iostream>
#include <string>

using namespace std;

int main() {
    string data;
    getline(cin, data);

    if(data == "char")
        cout << sizeof(char) << endl;
    else if(data == "int")
        cout << sizeof(int) << endl;
    else if(data  == "short")
        cout << sizeof(short) << endl;
    else if(data  == "float")
        cout << sizeof(float) << endl;
    else if(data == "double")
        cout << sizeof(double) << endl;
    else if(data == "long")
        cout << sizeof(long) << endl;

    return 0;
}