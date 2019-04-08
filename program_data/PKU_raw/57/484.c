int main()
{
	char s[20],k[10];
	int i,n,m,j;
	scanf("%d",&m);
	gets(k);
	for(j=0;j<m;j++)
	{
	gets(s);
	i=strlen(s)-1;
	if(s[i]=='y'&&s[i-1]=='l') 
	{
		n=strlen(s)-2;
		for(i=0;i<n-1;i++)
		printf("%c",s[i]);
		printf("%c\n",s[i]);
	}
	else if(s[i]=='r'&&s[i-1]=='e') 
	{
		n=strlen(s)-2;
		for(i=0;i<n-1;i++)
		printf("%c",s[i]);
		printf("%c\n",s[i]);
	}
	else if(s[i]=='g'&&s[i-1]=='n'&&s[i-2]=='i')
	{
		n=strlen(s)-3;
		for(i=0;i<n-1;i++)
			printf("%c",s[i]);
		printf("%c\n",s[i]);
		}
	}
		return 0;
		}
