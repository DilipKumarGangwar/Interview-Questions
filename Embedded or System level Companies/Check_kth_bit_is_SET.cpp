// C++ Program to check if kth bit is set?

//Assume bit numbering starts as 0,1,2 .... i.e. poistion of LSB is numbered as  0 ( i.e value of k=0 for LSB)

#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cout<<"Enter a number and value of k"<<endl;
    cin>>n>>k;
    if( (n & (1 << k)) != 0)
      cout<<k << " th bit is SET"<<endl;
    else  
    cout<<k << " th bit is NOT SET"<<endl;
    return 0;
}
