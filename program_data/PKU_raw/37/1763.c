main()
{
	int i,t;
	scanf("%d\n",&t);
	for(i=0;i<t;i++)
	{
		int j,k,m=0;
		char s[500],eng[26]={0};
		gets(s);
		for(k=0;s[k]!='\0';k++)
			eng[s[k]-'a']++;
		for(k=0;s[k]!='\0';k++)
			if(eng[s[k]-'a']==1) {printf("%c\n",s[k]);m=1;break;}
		if(m==0) printf("no\n");
	}
} 