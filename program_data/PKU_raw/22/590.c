int main()
{
	int i,a[300]={0},m,n;
	scanf("%d",&a[0]);
	for(i=1;i<300;i++)
		scanf(",%d",&a[i]);
	if(a[1]<a[0])
	{
		m=a[0];
		n=a[1];
	}
	else if(a[1]>a[0])
		{
		n=a[0];
		m=a[1];
	}
	else
	{m=a[1];
	n=0;}
	for(i=2;i<300;i++)
	{if(a[i]>m)
	{n=m;
	m=a[i];}
	else if(a[i]>n&&a[i]!=m)
		n=a[i];
	}
	if(n==0)
		printf("No");
	else if(m==n)
		printf("No");
	else
		printf("%d",n);
	

	return(0);
}