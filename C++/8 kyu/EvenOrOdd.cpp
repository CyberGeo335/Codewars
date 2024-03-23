#include <iostream>
#include <string>

using namespace std;

string even_or_odd(int number);

string even_or_odd(int number)
{
    if (number % 2 == 0){
        cout <<"Even"<<endl;
        return "Even";
    }else{
        cout <<"Odd"<<endl;
        return "Odd";
    }
}

int main() {
    int number = 5;
    even_or_odd(number);
}
