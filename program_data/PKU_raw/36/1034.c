int main()
{
	int i,m,n;
	char s1[100]={0},s2[100]={0},*p;
	scanf("%s %s",s1,s2);
	m=strlen(s1);
	n=strlen(s2);
	if(m!=n)
	{
		printf("NO\n");
		exit(0);
	}
	for(i=0;i<=m;i++)
	{
		if(strchr(s2,s1[i])==NULL)
		{
			printf("NO\n");
			exit(0);
		}
		else
		{
			p=strchr(s2,s1[i]);
			*p=027;
		}
	}
	printf("YES\n");
	return 0;
}