#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int **a,**b,**c;

int a_r,a_c,b_r,b_c;
int i,j,k;
again:
printf("\nenter rows and columns for matrix one:");

scanf("%d%d",&a_r,&a_c);printf("\nenter rows and columns for matrix two:");
scanf("%d%d",&b_r,&b_c);
if(a_c!=b_r )
{
printf("\ncan not multiply");
goto again;
}/* allocate memory for matrix one */
a=(int **)malloc(sizeof(int *)*a_r);

for( i=0;i<a_r;i++)
{
a[i]=(int *) malloc(sizeof(int*)*a_c);

} /* allocate memory for matrix two */

b=(int **) malloc(sizeof(int*)*b_r);
for( i=0;i<b_r;i++)
{
b[i]=(int *) malloc(sizeof(int)*b_c);
} /* allocate memory for sum matrix*/

c=(int **) malloc(sizeof(int *)*a_r);
for( i=0;i<a_r;i++)
{
c[i]=(int *) malloc(sizeof(int)*b_c);
}
printf("\n enter matrix one %d by %d\n",a_r,a_c);
for(i=0;i<a_r;i++)
{
for(j=0;j<a_c;j++)
{

scanf("%d",&a[i][j]);
}
}
printf("\n enter matrix two %d by %d\n",b_r,b_c);
for(i=0;i<b_r;i++)
{
for(j=0;j<b_c;j++)
{
scanf("%d",&b[i][j]);

}
} /*initialize product matrix */

for(i=0;i<a_r;i++)
{
for(j=0;j<b_c;j++)
{
c[i][j]=0;
}
} /* multiply matrix one and matrix two */
for(i=0;i<a_r;i++)
{
for(j=0;j<b_c;j++)
{
for(k=0;k<a_r;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
} /* display result */

printf("\n Product of matrix one and two is\n");
for(i=0;i<a_r;i++)
{
for(j=0;j<b_c;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}