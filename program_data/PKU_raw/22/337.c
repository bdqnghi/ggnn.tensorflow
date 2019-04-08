 void main()
{
	char c;
	int a[1001],i=1,first=-1, second=-1;
	for(i=0;i<=1000;i++)
		a[i]=1000;
	i=1;
	while((c=getchar())!='\n')
	{
		if(c!=',')
		{
			if(a[i]==1000) 
				a[i]=0;
			a[i]=a[i]*10+c-'0';
		}
		else i++;
	}
	if(a[2]==1000)
		printf("No\n");
	first=a[1];
	for(i=2;a[i]!=1000;i++)
	{
		if(a[i]>first)
		{	
			second=first;
			first=a[i];
		}
		else if(a[i]>second&&a[i]!=first)
			second=a[i];
	}
	if(second==-1&&a[2]!=1000)
		printf("No\n");
	else if(a[2]!=1000)
		printf("%d\n",second);
}
