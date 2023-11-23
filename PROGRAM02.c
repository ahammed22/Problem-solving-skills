#include <stdio.h>
 
int main()
{
    int i, n;
        
  printf("\n Input number upto which you want to print odd number series  ");
    scanf("%d", &n);
     
    printf("\n Odd number series upto %d is:  ",n);
     
    for(i=0; i<n; i++)
    {
        i = i + 1;
        printf("%d  ", i);
    }    
    return 0;
}
