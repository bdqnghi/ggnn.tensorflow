int main()
{
	int i,j,n,len[50];
	scanf("%d",&n);
	char c[50][50],s[50][50];
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
		len[i]=strlen(s[i]);
	}
	for(j=0;j<n;j++)
	{
		if(s[j][len[j]-1]=='r')
		{
			for(i=0;i<len[j]-2;i++)
			{
				c[j][i]=s[j][i];
			}
			c[j][i]='\0';
		}
		if(s[j][len[j]-1]=='g')
		{
			for(i=0;i<len[j]-3;i++)
			{
				c[j][i]=s[j][i];
			}
			c[j][i]='\0';
		}
		if(s[j][len[j]-1]=='y')
		{
			for(i=0;i<len[j]-2;i++)
			{
				c[j][i]=s[j][i];
			}
			c[j][i]='\0';
		}
		printf("%s\n",c[j]);
	}
	return 0;
}
		
