#include <iostream>
#include <string>

using namespace std;
bool isRotation(string s1, string s2)
{
    int n = s1.size();
    if (s2.size() == n && n >0) {
        string con = s1+s1;
        return con.find(s2) != string::npos;    
    }
    return false;
}

int main()
{
    string s1 = "waterbottle", s2 = "erbottlewat";
    cout << isRotation(s1, s2) << endl;
}
