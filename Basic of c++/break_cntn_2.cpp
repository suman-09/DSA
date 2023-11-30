// ==>> in 1 - 100 print those numbers which are not divisble by 3

// #include <iostream>
// using namespace std;

// int main(){
//     for (int i = 1; i < 101; i++)
//     {
//         if(i%3==0){
//             continue;
//         }
//         cout<<i<<endl;
//     }
    
//     return 0;
// }

// ==>> check if a number is prime or not

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i;
//     for (i = 2; i < n; i++)
//     {
//         if(n%i==0){
//             cout<<"Given number is not a prime number "<<endl;  
//             break;
//         }
//     }
//     if(i == n){
//         cout<<"Given number is prime number "<<endl;
//     }
//     return 0;
// }

// print all prime numbers between two given numbers

#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    for (int num = a; num < b; num++)
    {
        int i;
        for (i = 2; i < num; i++)
        {
            if (num%i==0)
            {
                break;
            }
        }
        if(i == num){
        cout<<num<<endl;
        }
    }
    
    return 0;
}