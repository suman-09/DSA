// neha can go out side only in odd days
// she has a fixed pocket money once it's gets over she can't go outside

#include <iostream>
using namespace std;

int main(){

    int pmoney = 5000;

    for (int date=1;date<=31;date++){

        if(date%2==0){
            continue;
        }
        if(pmoney<=0){
            break;
        }

        pmoney = pmoney - 1200;

        cout<<date;
        cout<<"  Neha you can go outside"<<endl;
    }
    return 0;
}