main()
{
	char a[250],b[250];
	int x[250],y[250],z[251]={0},i,j,m,n;
	gets(a);
	gets(b);
	m=strlen(a);
	n=strlen(b);
	for(i=0;i<=249;i++)
	{
		if(i<=249-m)
			x[i]=0;
		else
			x[i]=a[i-250+m]-'0';
	}
	for(i=0;i<=249;i++)
	{
		if(i<=249-n)
			y[i]=0;
		else
			y[i]=b[i-250+n]-'0';
	}
	for(i=249;i>=0;i--)
	{
		if(x[i]+y[i]+z[i+1]>=10)
		{
			z[i+1]=x[i]+y[i]+z[i+1]-10;
			z[i]=1;
		}
		else z[i+1]=x[i]+y[i]+z[i+1];
	}
	j=0;
	for(i=0;i<=250;i++)
	{
		if(z[i]!=0) 
		break;
		j=j+1;
	}
		for(;i<=250;i++)
			printf("%d",z[i]);
	if(j==251) printf("0");
}
