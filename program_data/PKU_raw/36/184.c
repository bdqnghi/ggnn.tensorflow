void main()
{
	int num[52]={0};
	char  s[50],ss[50];
	int l,ll,i,flag;
	scanf("%s",s);
	scanf("%s",ss);
	l=strlen(s);
	ll=strlen(ss);
	if(l!=ll)
		printf("NO");
	else
	{
		for(i=0;i<l;i++)
		{
			if(s[i]>='A'&&s[i]<='Z')
				num[s[i]-'a']++;
			else if(s[i]>='a'&&s[i]<='z')
				num[s[i]-'a'+26]++;
		}
		for(i=0;i<l;i++)
		{
			if(ss[i]>='A'&&ss[i]<='Z')
				num[ss[i]-'a']--;
			else if(ss[i]>='a'&&ss[i]<='z')
				num[ss[i]-'a'+26]--;
		}
		flag=1;
		for(i=0;i<52;i++)
			if(num[i])
			{
				flag=0;
				break;
			}
		if(flag)
			printf("YES");
		else
			printf("NO");
	}
}

