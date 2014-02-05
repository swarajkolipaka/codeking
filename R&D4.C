#include<stdio.h>
#include<malloc.h>
void main()
{
int *a,*b,i,n,max;
printf("enter the size of array\n");
scanf("%d",&n);
a=(int*)malloc(sizeof(int)*n);
b=(int*)calloc(100,sizeof(int));
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
b[a[i]]++;
max=a[0];
for(i=1;i<n;i++)
{
    if(b[a[i]]>max)
		max=a[i];		
}
printf("%d",max+1);
}