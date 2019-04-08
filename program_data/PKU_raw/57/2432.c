void main()
{
	char str[15];
	int n,i,j,l;
	scanf("%d",&n);
        gets(str);
	for(i=0;i<n;i++)
	{
		gets(str);
		l=strlen(str);
		if(str[l-1]=='g')
		{
			for(j=0;j<l-3;j++)
			printf("%c",str[j]);
		}
		else 
		{
			for(j=0;j<l-2;j++)
			printf("%c",str[j]);
		}
		printf("\n");
	}
}