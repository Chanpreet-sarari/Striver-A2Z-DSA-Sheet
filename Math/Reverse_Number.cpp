 #include<iostream>
 using namespace std;
 int reverse_number(int n)
 {

   // first method tc: O(log10 (n)) sc: O(1)
    int rev=0;
    while(n>0)
    {
        int lastdigit = n%10;
        rev=rev*10+lastdigit;
        n=n/10;
    }
    return rev;

    //
 }
 int main()
 {
    int n ;
    cout<<"Enter a number : ";
    cin>>n;
    int reversed = reverse_number(n);
    cout<<"The reverse of the number is : "<<reversed; 
    return 0;
 }