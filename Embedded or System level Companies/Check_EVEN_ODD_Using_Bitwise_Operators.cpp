// C++ Program to check even or odd using Bitwise opartors
//4 Approaches

//Sol 1: Using BITWISE AND

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    if( (n & 1) == 0)
      cout<<n << " is EVEN"<<endl;
    else  
    cout<<n << " is ODD"<<endl;
    return 0;
}


//Sol 2: USING BITWISE OR

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter a number"<<endl;
//     cin>>n;
//     if( (n | 1) > n)
//       cout<<n << " is EVEN"<<endl;
//     else          // ( (n | 1 ) == n)
//     cout<<n << " is ODD"<<endl;
//     return 0;
// }


// //SOL 3: USING BITWISE XOR

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter a number"<<endl;
//     cin>>n;
//     if( (n ^ 1) == (n+1))
//       cout<<n << " is EVEN"<<endl;
//     else          // ( (n | 1 ) == (n-1))
//     cout<<n << " is ODD"<<endl;
//     return 0;
// }



//SOL 3: USING BITWISE RIght SHift (>>) and LEFT Shift (<<)

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter a number"<<endl;
//     cin>>n;
//     int finalNumber = (n >> 1) << 1;
//     if( finalNumber  == n)
//       cout<<n << " is EVEN"<<endl;
//     else          //  if( finalNumber  ! n)
//     cout<<n << " is ODD"<<endl;
//     return 0;
// }