#include <iostream>
#include <string>

using namespace std;

int main() {
    string dataType;
    getline(cin, dataType);

    if(dataType == "char")
        cout << sizeof(char) << endl;
    else if(dataType == "int")
        cout << sizeof(int) << endl;
    else if(dataType == "short")
        cout << sizeof(short) << endl;
    else if(dataType == "float")
        cout << sizeof(float) << endl;
    else if(dataType == "double")
        cout << sizeof(double) << endl;
    else if(dataType == "long")
        cout << sizeof(long) << endl;

    return 0;
}