int main()
{
	char s[100][10];
	int a[100],b[100],i,n,k,l,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d",s[i],&a[i]);
		b[i]=a[i];
		
		
	}
	for(k=n-1;k>0;k--)
	{
		for(i=0;i<k;i++)
		{
			if(b[i]>b[i+1])
			{
				l=b[i];
				b[i]=b[i+1];
			b[i+1]=	l;
			}
		}
	}
	i=n-1;
	while(b[i]>=60)
	{
	for(j=0;j<n;j++)
	{
		if(a[j]==b[i])
		{
			printf("%s\n",s[j]);
		}
	}
	while(b[i-1]==b[i])	
	{
		i--;
	}
	i--;
	
	
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<60)
		printf("%s\n",s[i]);
	}
	return 0;
	
}