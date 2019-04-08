void main()
{
	int i,n,len;
	char word[100][20],d;
	scanf("%d",&n);  d=getchar();
	for(i=0;i<n;i++)
	{
		gets(word[i]);
		d=getchar;
	}
	for(i=0;i<n;i++)
	{
		len=strlen(word[i]);
		if(word[i][len-1]=='r'||word[i][len-1]=='y')
		{
			word[i][len-2]='\0';
			printf("%s\n",word[i]);
		}
		else
		{
			word[i][len-3]='\0';
			printf("%s\n",word[i]);
		}
	}
}