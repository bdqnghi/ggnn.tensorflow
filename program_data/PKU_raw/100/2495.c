int main()
{
	char s[300];
	scanf("%s",s);
	int a[26]={0},b[26]={0};
	int i,flag=0;
	for(i=0;i<strlen(s);i++)
		
		{
			if(s[i]>='a'&&s[i]<='z')
			{a[s[i]-'a']++;flag=1;}
			if(s[i]>='A'&&s[i]<='Z')
			{b[s[i]-'A']++;flag=1;}
	}
	for(i=0;i<26;i++)
	{
		if(b[i]!=0)
			printf("%c=%d\n",'A'+i,b[i]);
	}
	for(i=0;i<26;i++)
	{
		if(a[i]!=0)
			printf("%c=%d\n",'a'+i,a[i]);
	}
	
		if(flag==0)
			printf("No");
	
	return 0;
}
	
	
