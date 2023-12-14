// void -> doesn't return anything
// return
// parametarised
// non parametarised

#include <iostream>
using namespace std;

void printNAme(string name){
    cout<<"hey "<<name<<endl;
}

int main(){
    string name;
    cin>>name;
    printNAme(name);
    return 0;
}