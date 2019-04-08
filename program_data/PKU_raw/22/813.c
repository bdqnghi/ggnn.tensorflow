main()
{
	char c;
	int a[301]={0},i=1,value=0,max,second,k;
	while((c=getchar())!='\n')
	{
		if(c!=',')
		{
			value=value*10+c-'0';
		}
		else
		{
			a[i]=value;
			value=0;
			i++;
		}
	}
	a[i]=value;
	k=i;
	max=a[1];second=-1;
	for(i=2;i<=k;i++)
	{
		if(a[i]>max)
		{
			second=max;
			max=a[i];
		}
		else if(a[i]<max && a[i]>second)
			second=a[i];
	}
	if(second==-1)
		printf("No");
	else
		printf("%d",second);
	return 0;
}