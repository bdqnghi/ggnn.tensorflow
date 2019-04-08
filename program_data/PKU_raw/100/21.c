void main()
{
	char str[301];
	int num[26]={0},i,len,n=0;
	scanf("%s",str);
	len=strlen(str);
	for (i=0;i<len;i++)
		if (str[i]>='a'&&str[i]<='z')
		{
			num[str[i]-'a']=num[str[i]-'a']+1;
			n=1;
		}
	if (n==1)
	    for (i=0;i<26;i++)
			if (num[i]!=0)
				printf("%c=%d\n",i+'a',num[i]);
			else;
	else printf("No\n");
}
