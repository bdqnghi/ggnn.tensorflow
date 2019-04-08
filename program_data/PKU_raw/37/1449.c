int i,j,len,n;
char s[1000];
int cnt[1000];

main()
{
	scanf("%d",&n);
	for (i = 0; i < n ;++i)
	{
		scanf("%s",s);
		len = strlen(s);
		memset(cnt,0,sizeof(cnt));
		for (j = 0; j < len; ++j)
			cnt[s[j]-'a']++;
		for (j = 0; j < len; ++j)
			if (cnt[s[j]-'a']==1) break;
		if (j<len) printf("%c\n",s[j]);
		else puts("no");
	}
	
}