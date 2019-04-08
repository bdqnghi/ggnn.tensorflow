main()
{
	char c[1000];
	int i,a[26],b[26],flag=0;
	scanf("%s",c);
	for(i=0;i<26;i++)
	{
		a[i]=0;
		b[i]=0;
	}
	for(i=0;i<strlen(c);i++)
	{
		if(c[i]>='A'&&c[i]<'A'+26) a[c[i]-'A']++;
		else if(c[i]>='a'&&c[i]<'a'+26) b[c[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{
		if(a[i]!=0||b[i]!=0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)printf("No");
	else
	{
		for(i=0;i<26;i++)
		{
			if(a[i]!=0)
			{
				printf("%c=%d\n",'A'+i,a[i]);
			}
		}
		for(i=0;i<26;i++)
		{
			if(b[i]!=0)
			{
				printf("%c=%d\n",'a'+i,b[i]);
			}
		}
	}
}
