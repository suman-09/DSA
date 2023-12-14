#include <iostream>
using namespace std;

// pass by reference
void dosomething(string &s){ // now it's taking the address of the variable
    s[0] = 't';
    cout<<s<<endl;
}

int main(){
    string s = "suman";
    dosomething(s);
    cout<<s<<endl;
    return 0;
}