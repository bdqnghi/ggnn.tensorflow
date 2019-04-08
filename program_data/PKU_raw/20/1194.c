void main()
{
	char str[11],substr[4];
	int i;
	while(scanf("%s %s",str,substr)!=EOF)
	{
		char a[11];
		int l=strlen(str),m=0;
		for(i=1;i<l;i++)
		{
			if(str[m]<str[i])
				m=i;
		}
		for(i=m+1;i<l;i++)
		{
			a[i-m-1]=str[i];
		}
		a[l-m-1]='\0';
		str[m+1]='\0';
		strcat(str,substr);
		strcat(str,a);
		printf("%s\n",str);
	}
}