#include<iostream>
using namespace std;
int n = 1;
int nodd = 0, neven = 0;
int main(){
     cout << "Enter an integer: ";
     cin >> n;
     while (n != 0)
     {
        if (n%2 == 0)
        {
            neven++;
        }else{
            nodd++;
        }
        cout << "Enter an integer: ";
        cin >> n;
     }
     
    cout << "#Even numbers = "<< neven;
    cout << "\n#Odd numbers = "<< nodd;
    
    return 0;
}
