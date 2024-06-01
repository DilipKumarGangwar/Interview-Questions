// C Program to count total no of set bits in a number

//n = 22 #of total set bits = 3 as its binary form of 22 = 10110

#include <stdio.h>

int main()
{

    int n,count=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    int temp = n;
    while(temp != 0)
    {
      int set = temp & 1 ; //extract the LSB
      if( set == 1)     //count if bit is 1 , else ignore
        count++;
      temp = temp >> 1 ;  // change the number  
    }
    printf("Total no of set bits in %d = %d",n,count);
    return 0;
}
