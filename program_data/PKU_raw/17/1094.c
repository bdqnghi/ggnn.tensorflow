main()
{
	char c[100]={0},d[100]={0};
	int l,i,j,s;
	while(scanf("%s",c)!=EOF)
	{
	l=strlen(c);
	for(i=0;i<l;i++)
	{
		if(c[i]=='(') d[i]='$';
		else if(c[i]==')') 
		{
			d[i]='?';
			for(j=i-1,s=1;j>=0&&s==1;j--)
			{if(d[j]=='$') {d[j]=d[i]=' ';s=0;}}
		}
		else d[i]=' ';
	}
	for(i=0;i<l;i++) printf("%c",c[i]);printf("\n");
	for(i=0;i<l;i++) printf("%c",d[i]);printf("\n");
	}
}
