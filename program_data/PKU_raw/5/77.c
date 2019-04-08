int main()
{
	char a[500],b[500];
	int i,len,n=0,x,y;
	double m,p;
	scanf("%lf",&m);
	scanf("%s%s",a,b);
	x=strlen(a);
	y=strlen(b);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]>'Z'||a[i]<'A')
		{
			printf("error");
			return 0;}
	}
	if(x!=y)
		printf("error");
	else
	{
		len=strlen(a);
		for(i=0;i<len;i++)
		{
			if(a[i]==b[i])
			{
				n++;
			}
		}
	
	p=(double)n/len;
	if(p>m)
	{
		printf("yes");
	}
	else if(p<=m)
		printf("no");
	}
	return 0;
}

