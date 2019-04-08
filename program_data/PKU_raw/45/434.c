main()
{
	char s[50]={0},w[50]={0};
	int i,j,m;
	scanf("%s %s",s,w);
	m=strlen(s);
	for(i=0;*(w+i)!=0;i++)
	{
		if(*(w+i)==*s)
		{
			for(j=0;j<=m-1;j++)
				if(*(w+i+j)!=*(s+j))
					break;
		}
		if(j==m)
		{
			printf("%d\n",i);
			break;
		}
	}
}