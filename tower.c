#include<stdio.h>
#include<math.h>
int n,x;
void tower(int n,char a,char b,char c)
{
    if(n==1){
    printf("Move disk from %c to %c\n",a,c);
    }
    else{
        tower(n-1,a,c,b);
        printf("Move disk from %c to %c\n",a,c);
        tower(n-1,b,a,c);
    }
}
void main()
{
    printf("Enter the no of disks\n");
    scanf("%d",&n);
    tower(n,'A','B','C');
    x=pow(2,n)-1;
    printf("No of moves=%d",x);
}