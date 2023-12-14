#include <iostream>
using namespace std;

int main(){
    string s = "Suman";

    int len = s.size();
    s[len - 1] = 'x';
    cout<<s[len - 1]<<endl;
    return 0;
}