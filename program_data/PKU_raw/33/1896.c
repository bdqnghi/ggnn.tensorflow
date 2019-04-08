int main()
{
    int n,i,j;
	char s[1000][256];
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		gets(s[i]);
		for(j=0;j<=255;j++)
		{
			if(s[i][j]=='A')
			{
				s[i][j]='T';
			}
			else if(s[i][j]=='T')
			{
				s[i][j]='A';
			}
            else if(s[i][j]=='C')
			{
				s[i][j]='G';
			}

            else if(s[i][j]=='G')
			{
				s[i][j]='C';
			}
		}

		puts(s[i]);
	}
	return 0;
}
