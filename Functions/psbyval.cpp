#include <iostream>
using namespace std;


// pass by value ==> the original number didn't go a copy goes to the function
void dosomething(int num){ //this function works on the copy not the original value
    cout<<num<<endl; //10
    num += 5;
    cout<<num<<endl; //15
    num += 5;
    cout<<num<<endl; //20
}

int main(){
    int num = 10; //somewhere it is stored in the main memory
    dosomething(num); //it copies the value and send to the fucntion to do the other works
    cout<<num<<endl; //10 but this should be 20 as the value of the num increased to 20
    return 0;
}