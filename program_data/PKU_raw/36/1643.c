
main()
{
	int len1,len2;
	struct abc
	{
		int a[1000];
		char s[1000];
	};
	struct abc s1,s2;
	int i,j;

	scanf("%s %s",s1.s,s2.s);
	len1=strlen(s1.s);
	len2=strlen(s2.s);
	

	if(len1!=len2)
		printf("NO");
	else
	{
		for(i=0;i<len1;i++)
			s2.a[i]=0;
		
		for(i=0;i<len1;i++)
			for(j=0;j<len1;j++)
				if(s2.a[j]==0&&s2.s[j]==s1.s[i])
				{s2.a[j]=1;break;}

		for(i=0;i<len1;i++)
			if(s2.a[i]==0) break;

		if(i==len1) printf("YES");
		else printf("NO");
	}
}