#include<stdio.h>
int main()
{ int n,i=2;
printf("Enter n: ");
scanf("%d",&n);
printf("Prime factors of %d: ",n);
  while(n!=1)
  {
    if(n%i==0)
    {
        printf("%d ",i);
        n/=i;
    }
    else
    {
        i++;
    }
    
  }
  printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
    return 0;
}
