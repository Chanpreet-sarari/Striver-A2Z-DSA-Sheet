#include<iostream>
#include<algorithm>
#include <numeric>
using namespace std;
int gcd(int a,int b )
{
    // first method tc: O(min(a,b)) sc: O(1)
    // int gcd = 1 ;
    // for(int  i= 1 ; i<= min(a,b) ; i++)
    // {
    //     if(a%i==0 && b%i==0)
    //     {
    //         gcd = i ;
    //     }
    // }
    // return gcd;

    // second method tc: O(log(min(a,b))) sc: O(1)
    // int gcd = 1 ;
    // for(int i = min(a,b) ; i>=1 ; i--)
    // {
    //     if(a%i==0 && b%i==0)
    //     {
    //         gcd = i ;
    //         break;
    //     }
    // }
    // return gcd; 

    // third method tc: O(log(min(a,b))) sc: O(1)
    while(a> 0 && b >  0)
    {
        if(a>b) a = a%b ;
        else b = b%a ; 
        if(a==0) return b ;
        if(b==0) return a ;
    }
    return 1 ;

     
}
int main()
{
    int n1 ;
    cout<<"Enter first number : ";
    cin>>n1;
    int n2 ;
    cout<<"Enter second number : ";
    cin>>n2;
    gcd(n1,n2);
    cout<<"The GCD of "<<n1<<" and "<<n2<<" is : "<<gcd(n1,n2);
    return 0;
}