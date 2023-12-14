#include <iostream>
using namespace std;

// pass by reference
// void dosomething(string &s){ // now it's taking the address of the variable
//     s[0] = 't';
//     cout<<s<<endl;
// }

// int main(){
//     string s = "suman";
//     dosomething(s);
//     cout<<s<<endl;
//     return 0;
// }


// pass by reference
void dosomething(int arr[], int n){ // ==>> array always goes with reference
    arr[0] += 100;
    cout << "value inside the function :" << arr[0] << endl;
}

int main(){
    int n = 5;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    dosomething(arr, n);

    cout << arr[0] <<endl;

    return 0;
}