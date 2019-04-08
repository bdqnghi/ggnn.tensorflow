void main()
{
    int numl[26]={0},nums[26]={0},i,n,tag=0;
	char s[301],j;
	gets(s);
	n=strlen(s);
    for(i=0;i<n;i++)
	{
		for(j='A';j<='Z';j++)
			if(s[i]==j)
			{numl[j-'A']++;tag=1;}
		for(j='a';j<='z';j++)
			if(s[i]==j)
			{nums[j-'a']++;tag=1;}
	}
    if(tag==0)printf("No\n");
	else
	{
		for(i=0;i<26;i++)
			if(numl[i]!=0)
				printf("%c=%d\n",i+'A',numl[i]);
		for(i=0;i<26;i++)
			if(nums[i]!=0)
				printf("%c=%d\n",i+'a',nums[i]);
	}
}