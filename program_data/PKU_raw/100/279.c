main()
{
	char a[300];
	gets(a);
	int i,num[26]={0},len,k;
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
			num[a[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{
		if(num[i]!=0)
		{
            k=0;
			break;
		}
		else k=1;
	}
	if(k==1)
		printf("No\n");
	else if(k==0)
	{
		for(i=0;i<26;i++)
		{
			if(num[i]==0)
                continue;
			else
                printf("%c=%d\n",'a'+i,num[i]);
		}
	}
}