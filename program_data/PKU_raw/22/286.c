void main()
{
	int a[1000];
	char c;
	char d;
	int n;
	int i,j;
	int flag=-1;
	int big=0;
	int second=0;
	for(i=0;;i++)
	{
		scanf("%d",&a[i]);
		c=getchar();
		if(c!=',')
		{
			break;
		}
	}
	n=i;
	for(i=0;i<=n;i++)
	{
		if(a[i]>big)
		{
			big=a[i];
		}
	}
	for(i=0;i<=n;i++)
	{
		if(a[i]==big)
		{
			a[i]=-1;
		}
	}
	for(i=0;i<=n;i++)
	{
		if(a[i]>flag)
		{
			flag=a[i];
		}
	}
	if(flag!=-1)
	{
		printf("%d",flag);
	}
	else
	{
		printf("No");
	}
}
