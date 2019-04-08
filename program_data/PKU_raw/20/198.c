void main()
{
	char str[15],substr[3];
	int n,i,j;
	while (scanf("%s %s",str,substr)!=EOF)
	{
		n=strlen(str);
		j=0;
		str[n]=97;
		substr[3]=97;
		for(i=1;i<=n-1;i++)
		{
			if(str[i]>str[j])
				j=i;
		}
		for(i=n;i>=j+1;i--)
		{
			str[i+3]=str[i];
		}
		for(i=j+1;i<=j+3;i++)
		{
			str[i]=substr[i-1-j];
		}
		str[n+3]='\0';
		printf("%s\n",str);
	}
}
