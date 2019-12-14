#include<stdio.h>
int main()
{
    int i,j,k;
    int A[i][j],B[i][j],C[i][j],sum;
 
  printf("Enter 9 numbers for the first matrix");
   for(i=0;i<=2;i++)
   for(j=0;j<=2;j++)
   scanf("%d",&A[i][j]);

   printf("Enter 9 number for the second matrix");
   for(i=0;i<=2;i++)
   for(j=0;j<=2;j++)
   scanf("%d",&B[i][j]);
 
 for(i=0;i<=2;i++)

 for(j=0;j<=2;j++)

    {
sum=0;
for(k=0;k<=2;k++)
sum=sum+A[i][k]*B[k][j];
C[i][j]=sum; 
    printf("\n");
}
      for(i=0;i<=2;i++)
      for(j=0;j<=2;j++)
      printf("%d",C[i][j]);

    return 0;
}
