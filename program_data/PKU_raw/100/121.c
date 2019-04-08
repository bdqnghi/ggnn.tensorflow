void main()
{
	int i,a[26]={0},sum=0;
	char b[26],str[300];
	gets(str);
	for(i=0;i<26;i++)
	{
		b[i]='a'+i;
	}
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			a[str[i]-'a']++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(a[i]!=0)
		{
			sum++;
			printf("%c=%d\n",b[i],a[i]);
		}
	}
	if(sum==0)
		printf("No");
}