int main()
{
	char s[301];
	char c;
	int a1[26]={0},a2[26]={0};
	int i,j=0;
	gets(s);
    for(i=0;s[i];i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
			a1[s[i]-'A']++;
		if(s[i]>='a'&&s[i]<='z');
		a2[s[i]-'a']++;
	}
    for(i=0;i<26;i++)
	{
		if(a1[i]>0)
		{
			c=i+'A';
			printf("%c=%d\n",c,a1[i]);
            j++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(a2[i]>0)
		{
			c=i+'a';
			printf("%c=%d\n",c,a2[i]);
            j++;
		}
	}
	if(j==0)
		printf("No");
	return 0;
}
