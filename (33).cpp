#include<stdio.h>
int main()
{
    int a[10] [10],b[10] [10],s[10] [10];
    int m,n,l,p,i,j,k;
    printf("Enter row first matrix(<=10):\t");
    scanf("%d",&m);
    printf("Enter column of first matrix(<=10):\t");
    scanf("%d",&n);
    printf("Enter row second matrix(<=10):\t");
    scanf("%d",&l);
    printf("Enter column of second matrix(<=10):\t");
    scanf("%d",&p);
    if(n!=1)
    printf("Multiplication is not possible :");
    else 
    {
    printf("Enter first matrix elements:\n");
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            printf("Element [%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix :\n");
    for(i=0;i<=l-1;i++)
    {
        for(j=0;j<=p-1;j++){
            printf("Enter b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<=m-1;i++){
        for(j=0;j<=p-1;j++){
            s[i] [j]=0;
            for(k=0;k<=n-1;k++){
                s[i][j]=s[i][j]+a[i][k]*b[k][j];
            }
        }
    }
        printf("The matrix after multiplication is:\n");
        for(i=0;i<=m-1;i++){
            for(j=0;j<=p-1;j++){
                printf("%d\t",s[i] [j]);
            }
            printf("\n");
        }
    }
}
