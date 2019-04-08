void main()
{
	int i,j,m,n;
	char str[11],substr[4],s[15];
	while(scanf("%s %s",str,substr)!=EOF)
	{
		m=strlen(str);
		n=strlen(substr);
		j=0;
		for(i=0;i<m;i++)
		{
			if(str[i]>str[j]) j=i;
		}
		for(i=0;i<=j;i++) s[i]=str[i];
		for(i=j+1;i<j+1+n;i++) s[i]=substr[i-j-1];
		for(i=j+1+n;i<m+n;i++) s[i]=str[i-n];
		s[m+n]='\0';
		printf("%s\n",s);
	}
}

