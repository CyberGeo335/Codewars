#include <iostream>
#include <string>
#include<algorithm>

using namespace std;
string removeExclemationMarks_version_1(string str);

//string removeExclemationMarks_version_2(string str);


string removeExclemationMarks_version_1(string str)
{
    str.erase(remove(str.begin(), str.end(), '!'), str.end());
    return str;
}


int main() {
    string str = "H!el!!!l!o w!o!r!l!d!";
    //removeExclemationMarks_version_2(str);
    removeExclemationMarks_version_1(str);
}
