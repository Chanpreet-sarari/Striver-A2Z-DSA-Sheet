#include<iostream>
using namespace std;

// first method tc: O(log10 (n)) sc: O(1)
// int reverse_number(int n)
// {
//     int rev =  0 ;
//     while(n > 0)
//     {
//         int lastdigit = n %10 ;
//         rev = rev *10 + lastdigit;
//         n = n / 10 ;
//     }
//     return rev;
// }


int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int rev = reverse_number(n);
    if(n==rev)
    {
        cout<<"The number is a palindrome";
    }
    else
    {
        cout<<"The number is not a palindrome";
    }
     
}