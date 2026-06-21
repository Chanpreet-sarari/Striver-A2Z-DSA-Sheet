#include<iostream>
#include<cmath>
using namespace std;
bool is_aramstrong(int n)
{
    int k = to_string(n).length();
    int sum = 0;
    int temp = n;
    while(temp > 0)
    {
        int latdigit = temp % 10 ;
        sum = sum + pow(latdigit, k);
        temp = temp / 10;
    }
    if(sum == n)
        return true;
    else
        return false;
}
int main()
{
    int n ;
    cout<<"Enter a number : ";
    cin>>n;
    if(is_aramstrong(n))
        cout<<"It is an Armstrong number."<<endl;
    else
        cout<<"It is not an Armstrong number."<<endl;
    return 0;
}