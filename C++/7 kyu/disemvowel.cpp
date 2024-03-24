#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string disemvowel_1(string str);
string disemvowel_2(string str);



string disemvowel_1(string str){
    const int sizeArr = 10;
    char arr[sizeArr] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U' };
    for (int i = 0; i < sizeArr; i++){
        str.erase(remove(str.begin(), str.end(), arr[i]), str.end());
    }
    //cout<<str<<endl;
}

int main() {
    string str = "This website is for loswers LOL!";
    disemvowel_1(str);
    //disemvowel_2(str);
    return 0;
}
