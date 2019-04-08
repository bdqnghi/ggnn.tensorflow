void del(char s[],char a)
{
	int j=0;
	while(s[j]!='\0')
	{
		if(s[j]==a)
		{
			s[j]=',';
			break;
		}
		else j++;
	}
}
void main()
{
	char s1[20],s2[20];
	int i,n,m;
	scanf("%s %s",s1,s2);
	n=strlen(s2);
	m=strlen(s1);
	if(n!=m)
		printf("NO");
	if(n==m)
	{
		for(i=0;i<n;i++)
		del(s1,s2[i]);
		for(i=0;i<n;i++)
		if(s1[i]!=',')
		{
				printf("NO");
				break;
		}
		if(i==n)printf("YES");
	}
}