void main()
{
	int a[100]={0},m,n,i,j,s=0;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	j=n=a[0];
	for(i=0;i<100;i++)
	{
		if(a[i]>n)
			n=a[i];
		
	}
    for(i=0;i<100;i++)
	{
		if(a[i]==n)
			s=i;
		
	}
	for(i=0;i<s;i++)
	{
		if(a[i]>j)
			j=a[i];
		
	}
for(i=s+1;i<m;i++)
	{
		if(a[i]>j)
			j=a[i];
		
	}
printf("%d\n%d\n",n,j);
}
