void main()
{
	char s[1000][40];
	int n,len=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",s[i]);
	len=strlen(s[0]);
	for(i=0;i<n-1;i++)
	{
		len=len+strlen(s[i+1])+1;
		if(len>80)
		{
			len=strlen(s[i+1]);
			printf("%s",s[i]);
			printf("\n");
		}
		else
			printf("%s ",s[i]);
	}
	printf("%s",s[n-1]);
}