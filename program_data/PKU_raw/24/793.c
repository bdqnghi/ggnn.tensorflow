void main()
{
	char a[50][50]={0},c;
	int b[50]={0},i,j,m,max,min;
	for(i=0;;i++)
	{
		scanf("%s",a[i]);
		if(c=getchar()=='\n')
			break;
		m=i;
	}
	for(i=0;i<=m+1;i++)
	{
		for(j=0;j<50;j++)
		{
			if(a[i][j]!=0)
				b[i]++;
		}
	}
	for(i=1,max=0,min=0;i<=m+1;i++)
	{
		if(b[i]>b[max])
		{
			max=i;
		}
		if(b[i]<b[min])
		{
			min=i;
		}
	}
	printf("%s\n%s\n",a[max],a[min]);
}
