void main()
{
	char a[100][20]={0};
	int i=0,j,b[100]={0},t;
	while(scanf("%s",a[i])!=EOF)
	{
		b[i]=strlen(a[i]);
		i++;
	}
	t=b[0];
	for(j=0;j<=i;j++)
	{
		if(t<b[j])t=b[j];
	}
	for(j=0;j<i;j++)
	{
		if(t==b[j])
		{
			printf("%s\n",a[j]);
			break;
		}
	}
	t=b[0];
    for(j=0;j<i;j++)
	{
		if(t>b[j])t=b[j];
	}
	for(j=0;j<=i;j++)
	{
		if(t==b[j])
		{
			printf("%s",a[j]);
			break;
		}
	}
}
