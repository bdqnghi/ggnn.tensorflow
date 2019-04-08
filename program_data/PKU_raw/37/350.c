int main()
{
	int t,a[26],i,j,len;
	char input[100000];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%s",input);
		len=strlen(input);
		for(j=0;j<26;j++)
			a[j]=0;
		for(j=0;j<len;j++)
		{
			a[input[j]-'a']++;
		}
		for(j=0;j<len;j++)
		{
			if(a[input[j]-'a']==1)break;
		}
		if(j<len-1)
			printf("%c\n",input[j]);
		else printf("no\n");
	}
	return 0;
}



