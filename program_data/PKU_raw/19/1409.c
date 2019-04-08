int main()
{
	char s[100][101];
	char a[101],b[101];
	int i,j;
	scanf("%s",s[0]);
	for(i=1;getchar()!='\n';i++)
	{
	scanf("%s",s[i]);
	}
	gets(a);
	gets(b);
	for(j=0;j<i;j++)
	{
		if(strcmp(s[j],a)==0)
			strcpy(s[j],b);
	}
	printf("%s",s[0]);
	for(j=1;j<i;j++)
	{
		printf(" %s",s[j]);
	}
	return 0;
}

