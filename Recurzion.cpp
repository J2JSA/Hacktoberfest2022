#include<iostream>     // Header  files inclusion
using namespace std;

int add(int a);
int main() 

{
    int a;             // Variable declaration
    cout << "Enter a positive integer: ";
    cin >> a;

    cout<< "Sum =  " << add(a);

return 0;
}

int add(int a) 
{
    if(a!= 0)        //Conditional Statement
        return a +add(a - 1);
    return 0;
}
