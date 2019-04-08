int count (char str[10],int len)
{
	int i;
	int maxi=0;
	for (i=0;i<len;i++)
	{
		if (str[i]>str[maxi]) maxi=i;
	}
	return maxi;
}

void main()
{
	int n,len,j;
	char sa[14],str[11],substr[4];
	while(scanf("%s%s",str,substr)!=EOF)
		 {
	 	len=strlen(str);
		n=count(str,len);
		for(j=0;j<=n;j++)
			sa[j]=str[j];
		for(j=n+1;j<=n+3;j++)
			sa[j]=substr[j-n-1];
		for(j=n+4;j<=len+2;j++)
			sa[j]=str[j-3];
		sa[len+3]='\0';
		printf("%s\n",sa);
		 }
}


