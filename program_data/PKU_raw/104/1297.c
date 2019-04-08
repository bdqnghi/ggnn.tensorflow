int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j,a[20]={n},b[20]={m};
	for(i=1;i<20;i++)
	{
		if(n==1)
			break;
		a[i]=n/2;
		n=n/2;
	}
	for(i=1;i<20;i++)
	{
		if(m==1)
			break;
		b[i]=m/2;
		m=m/2;
	}
	for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			if(a[i]==b[j])
			{
				printf("%d\n",a[i]);
				return 0;
			}
		}
	}





	
	return 0;
}
