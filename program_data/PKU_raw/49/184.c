int main()
{
	char s[500];
	gets(s);
	int len;
	len=strlen(s);
	int n, i, j;
	int judge;
	for(n=2;n<=len;n++)
	{
		for(j=0;j<len-n+1;j++)
		{
			judge=1;
			for(i=0;i<n;i++)
			{
				if(n+j-i-1>=len) break;
				else
				{
					if(s[i+j]!=s[n-1-i+j]) judge=0;
				}
			}
			if(judge==1)
			{
				for(i=0;i<n;i++)
				{
					printf("%c", s[i+j]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}
					


