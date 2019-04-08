int main()
{
	int s[55]={0},i,l,t;
	char str[300];
	gets(str);
	l=strlen(str);
	for(i=0;i<=l-1;i++)
	{
		if(str[i]>='a'&&str[i]<='z')
			s[(int)(str[i])-68]++;
		if(str[i]>='A'&&str[i]<='Z')
			s[(int)(str[i])-64]++;
	}
	t=0;
	for(i=1;i<=27;i++)
	{
		if(s[i]!=0)
		{
			printf("%c=%d\n",64+i,s[i]);
			t=1;
		}
	}
	for(i=28;i<=54;i++)
	{
		if(s[i]!=0)
		{
			printf("%c=%d\n",68+i,s[i]);
			t=1;
		}
	}
	if(t==0)
		printf("No");
	return 0;	
}
