//Yash Nangia
//b3
//152
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    int *i, *j;
    int k;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter another number: ";
    cin>>b;
    i = &a;
    j = &b;
    cout<<"Memory location of first number : "<<i<<endl;
    cout<<"Memory location of first number : "<<&a<<endl;
    cout<<"First number using dereferencing : "<<*i<<endl;
    cout<<"First number : "<<a<<endl;
    cout<<"Memory location of first number : "<<j<<endl;
    cout<<"Memory location of first number : "<<&b<<endl;
    cout<<"Second number : "<<*j<<endl;
    cout<<"Second number : "<<b<<endl;
    cout<<"Sum of two numbers: "<<*i+*j<<endl;

    for (k = 0;k<3;k++)
    {
        i++;
        cout<<"Incremented memory: "<<i<<endl;
    }
    *i = 20;
    cout<<a<<endl;

    int c[] = {1,2,3,4,5};

    cout<<"Array as a pointer: "<<*c<<endl;

    cout<<"Array pointer with iteration: "<<endl;
    for (k = 0; k<5 ;k++)
    {
        cout<<*(c+k)<<endl;
    }
}

//Output
Enter a number: 3
Enter another number: 4
Memory location of first number : 0x7fff81294a44
Memory location of first number : 0x7fff81294a44
First number using dereferencing : 3
First number : 3
Memory location of first number : 0x7fff81294a40
Memory location of first number : 0x7fff81294a40
Second number : 4
Second number : 4
Sum of two numbers: 7
Incremented memory: 0x7fff81294a48
Incremented memory: 0x7fff81294a4c
Incremented memory: 0x7fff81294a50
3
Array as a pointer: 1
Array pointer with iteration: 
1
2
3
4
5
