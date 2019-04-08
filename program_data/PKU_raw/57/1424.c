/* Note:Your choice is C IDE */
void main()
{
	int n,l[101];
	char s[101][101];
	int m,a,b,c,r;
	scanf("%d\n",&n);
	for(m=0;m<=n-1;m++)
	{
		gets(s[m]);
        l[m]=strlen(s[m]);
	}
	for(m=0;m<=n-1;m++)
	{
		a=l[m]-3;
		b=l[m]-2;
		c=l[m]-1;
		if(s[m][a]==105&&s[m][b]==110&&s[m][c]==103)
		{
			for(r=0;r<=l[m]-5;r++)
			printf("%c",s[m][r]);
			printf("%c\n",s[m][a-1]);
		}
		if(s[m][b]==101&&s[m][c]==114)
		{
			for(r=0;r<=l[m]-4;r++)
			printf("%c",s[m][r]);
			printf("%c\n",s[m][a]);
		}
		if(s[m][b]==108&&s[m][c]==121)
		{
			for(r=0;r<=l[m]-4;r++)
			printf("%c",s[m][r]);
			printf("%c\n",s[m][a]);
		}
	}    
}