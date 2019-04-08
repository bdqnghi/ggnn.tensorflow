void main()
{
	int m,t,b[1000],a[26]={0},max;
	char str[1000][30];
	int i,j;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d %s",&b[i],str[i]);
		for(j=0;str[i][j]!='\0';j++)
		{
			t=str[i][j]-'A';
			a[t]++;
		}
	}
	t=0;
	max=a[0];
	for(i=0;i<26;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			t=i;
		}
	}
	printf("%c\n",'A'+t);
	printf("%d\n",a[t]);
	for(i=0;i<m;i++)
	{
		for(j=0;str[i][j]!='\0';j++)
		{
			if(str[i][j]=='A'+t)
				printf("%d\n",b[i]);
		}
	}
}