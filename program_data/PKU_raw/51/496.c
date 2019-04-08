int main()
{
	int n,c[510],max=0;
	scanf("%d\n",&n);
	char s[510],m[510][5];
	gets(s);
	int i,j;
	for(i=0;i<=strlen(s)-n;i++)
	{
		for(j=0;j<n;j++)
		{
			m[i][j]=s[i+j];
		}
		m[i][n]='\0';
	}
	for(i=0;i<=strlen(s)-n;i++)
	{
		c[i]=1;
		for(j=i+1;j<=strlen(s)-n;j++)
		{
			if(strcmp(m[i],m[j])==0)
			{
				c[i]++;
			}
		}
	}
	for(i=0;i<=strlen(s)-n;i++)
	{
		if(c[i]>max)
		{
			max=c[i];
		}
	}
	if(max>1)
	{
		printf("%d\n",max);
	for(i=0;i<=strlen(s)-n;i++)
	{
		if(c[i]==max)
			printf("%s\n",m[i]);
	}
	}
	else
		printf("NO");
	return 0;
}










