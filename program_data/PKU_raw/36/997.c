void main()
{
	char d1[1000],d2[1000];
	int a1_cap[26]={0},a1_sma[26]={0},a2_cap[26]={0},a2_sma[26]={0};
	scanf("%s %s",d1,d2);
	int l1=strlen(d1),l2=strlen(d2),i;
	for(i=0;i<l1;i++)
	{
		if(d1[i]>='a'&&d1[i]<='z')
		{
			int p=d1[i]-'a';
			a1_sma[p]++;
		}
		else if(d1[i]>='A'&&d1[i]<='Z')
		{
			int p=d1[i]-'A';
			a1_cap[p]++;
		}
	}
	for(i=0;i<l2;i++)
	{
		if(d2[i]>='a'&&d2[i]<='z')
		{
			int p=d2[i]-'a';
			a2_sma[p]++;
		}
		else if(d2[i]>='A'&&d2[i]<'Z')
		{
			int p=d2[i]-'A';
			a2_cap[p]++;
		}
	}
	int ans=0;
	for(i=0;i<26;i++)
	{
		if(a1_sma[i]==a2_sma[i])
			ans++;
		if(a1_cap[i]==a2_cap[i])
			ans++;
	}
	if(ans==52)
		printf("YES\n");
	else printf("NO\n");
}