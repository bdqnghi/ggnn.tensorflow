void main()
{
	char c[300];
	int i,j,n,count,count1=0;
	gets(c);
	n=strlen(c);
	for(i=65;i<91;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(i==c[j])
				count+=1;
		}
		if(count!=0)
		{
			printf("%c=%d\n\n",i,count);
			count1+=1;
		}
	}
	for(i=97;i<123;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(i==c[j])
				count+=1;
		}
		if(count!=0)
		{
			printf("%c=%d\n\n",i,count);
			count1+=1;
		}
	}
	if(count1==0)
		printf("No\n");
}