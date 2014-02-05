#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l1,l2,m;
	int *a,*b,*c;
	float mid;
	clrscr();
	printf("enter no.of entries in 1st array\n");
	scanf("%d",&l1);
	printf("enter no.of entries in 2nd array\n");
	scanf("%d",&l2);
	m=l1+l2;
	a=(int*)malloc(sizeof(int)*l1);
	b=(int*)malloc(sizeof(int)*l2);
	c=(int*)malloc(sizeof(int)*(m));
	printf("enter elements of 1st array\n");
	for(i=0;i<l1;i++)
	scanf("%d",&a[i]);
	printf("enter elements of 2nd array\n");
	for(i=0;i<l2;i++)
	scanf("%d",&b[i]);
	for(i=0,j=0,k=0;i<l1||j<l2;)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else
		{
			c[k]=b[j];
			j++;
			k++;
		}
	}
	if(i<l1)
	{
		while(i<=l1)
		{
		c[k]=a[i];
		k++;
		i++;
		}
	}
	else if(j<l2)
	{
		while(j<=l2)
		  {
			c[k]=b[j];
			k++;
			j++;
		  }
	}
	if(m%2==0)
	{
	      mid=(float)(c[(m-1)/2]+c[((m-1)/2)+1])/2;
	}
	else
	mid=c[m/2];
	printf("\n median is %f",mid);
	getch();
}