int main()
{
int a[100];
int n,m,i,j,s,t,q,b,c,d;
scanf("%d%d",&n,&m);
for(i=0;i<=n-1;i++)
scanf("%d",&a[i]);
for(j=0;j<=(n-m-1)/2;j++)
	{
	b=a[j];
	a[j]=a[n-m-1-j];
	a[n-m-1-j]=b;
	}
for(s=0;s<=(m-1)/2;s++)
	{
	c=a[n-m+s];
	a[n-m+s]=a[n-1-s];
	a[n-1-s]=c;
	}
for(t=0;t<=(n-1)/2;t++)
{
	d=a[t];
	a[t]=a[n-1-t];
	a[n-1-t]=d;
}
printf("%d",a[0]);
for(q=1;q<=n-1;q++)
printf(" %d",a[q]);
return 0;
}