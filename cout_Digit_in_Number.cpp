 #include<iostream>
using namespace std;   
int count(int n)    
{   
    //first method tc=O(log10(n)) sc=O(1) 

    // int count=0;   
    //  while(n>0)
    //  {
    //     n/=10;
    //     count++;
    //  }
    // cout<<"Number of digits: "<<count;
    // return count; 

    //second method tc=O(1) sc=O(1)
    // int count  = int(log10(n)+1);
    // cout<<"Number of digits: "<<count;
    // return count;

    //third method tc=O(1) sc=O(1)
    // int count = to_string(n).length();
    // cout<<"Number of digits: "<<count;
    // return count;
    
     //fourth method tc=O(1) sc=O(1)   
    // int count = floor(log10(n)+1);
    // cout<<"Number of digits: "<<count;
    // return count;
    
    //fifth method tc=O(1) sc=O(1)
    int count = ceil(log10(n+1));
    cout<<"Number of digits: "<<count;
    return count;

    //sixth method tc=O(1) sc=O(1)
    // int count = (int)log10(n)+1;
    // cout<<"Number of digits: "<<count;
    // return count;    

    //seventh method tc=O(1) sc=O(1)    
    // int count = (int)ceil(log10(n+1));
    // cout<<"Number of digits: "<<count;
    // return count;

    //eighth method tc=O(1) sc=O(1)
    // int count = (int)floor(log10(n)+1);
    // cout<<"Number of digits: "<<count;
    // return count;    

    //ninth method tc=O(1) sc=O(1)
    // int count = (int)to_string(n).length();
    // cout<<"Number of digits: "<<count;
    // return count;    

     
} 
int main()    
{    
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    count(n);
     
    return 0;
}