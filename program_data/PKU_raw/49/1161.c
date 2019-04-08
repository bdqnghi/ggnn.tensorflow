int main()
{
	int i,j,k,l;
	char s[550];
	gets(s);
	l=strlen(s);
	for(i=1;i<=l/2;i++)
	{
		for(j=i-1;j<=l-1-i;j++)
			if(s[j]==s[j+1])
			{
				for(k=1;k<=i-1;k++)
					if(s[j-k]!=s[j+1+k])
						break;
				if(k>i-1)
				{
					for(k=j+1-i;k<=j+i;k++)
						printf("%c",s[k]);
					printf("\n");
				}
			}
	}
	return 0;
}