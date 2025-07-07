#include<stdio.h>
int main() 
{
int n=121,rev=0,ori;
ori=n;
while(n!=0)
{
    rev=rev*10+n%10;
    n=n/10;
}
if(rev==ori)
printf("%d is pallindrome",rev);
else
printf("%d is not pallindrome",rev);
return 0;
}
