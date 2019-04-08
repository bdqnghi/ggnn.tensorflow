void main ()

{ void sort(int *p,int m);
	int i,n;
	int a[101],*p;
    scanf("%d",&n);
  
  for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
  p=&a[0];
  sort(p,n);
for(i=0;i<n-1;i++)
  printf("%d ",a[i]);
printf("%d",a[n-1]);
}
void sort(int *p,int m)
{
	int i;
	int t,*p1,*p2;
for(i=0;i<m/2;i++)
{
p1=p+i;
p2=p+(m-1-i);
t=*p1;
*p1=*p2;
*p2=t;
}
}
