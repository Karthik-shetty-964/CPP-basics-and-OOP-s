#include<stdio.h>
#include<conio.h>

int d(int a[5][5],int n)
{
 int i,j,p[5][5],c[5],k,x;
 if(n==2)
	return a[0][0]*a[1][1]-a[0][1]*a[1][0];        
 else
 {

		x=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
			x=1;
			continue;
			}
			else
			{
			for(k=0;k<n-1;k++)
			{
				if(x!=1)
				p[k][j]=a[k+1][j];
				else
				p[k][j-1]=a[k+1][j];
			}
		}
	}
  c[i]=((i%2==0)?1:-1)*d(p,n-1);
  }
  k=0;
  for(i=0;i<n;i++)
  k+=a[0][i]*c[i];
  return k;
 }
}

int main()
{
int a[5][5],i,n,j;
printf("enter the order of matrix : \n");
scanf("%d",&n);
printf("enter the elements of matrix : \n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
printf("your matrix is as follows : ");
for(i=0;i<n;i++)
{
printf("\n");
for(j=0;j<n;j++)
printf("%d\t",a[i][j]);
}
printf("\ndeterminant : %d",((n==1)?a[0][0]:d(a,n)));
getchar();
getchar();
return 0;
}

