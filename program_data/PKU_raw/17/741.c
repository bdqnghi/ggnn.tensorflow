int main()
{
	char s[11][101]={{'\0'}},s0[101];
	int i=0,j,k,l,c;
	while(i<=10)
	{
		scanf("%s",s[i]);
		strcpy(s0,s[i]);
		l=strlen(s[i]);
		for(j=l-1;j>=0;j--)
		{
			c=0;
			if(s[i][j]=='(')
			{
				for(k=j;k<=l-1;k++)
				{
					if(s[i][k]==')')
					{
						c=1;
						s[i][k]=' ';
						s[i][j]=' ';
						break;;
					}
				}
				if(c==0)
					s[i][j]='$';
			}
			else if(s[i][j]!=')')
				s[i][j]=' ';
		}
		for(j=0;j<=l-1;j++)
		{
			if(s[i][j]==')')
				s[i][j]='?';
		}
		for(j=0;j<=l-1;j++)
			printf("%c",s0[j]);
		printf("\n");
		for(j=0;j<=l-1;j++)
			printf("%c",s[i][j]);
		printf("\n");
		i++;
	}
}