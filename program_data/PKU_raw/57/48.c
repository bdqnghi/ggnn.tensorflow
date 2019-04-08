void main()
{
	int n,i,j,len;
	char words[50][15];
	scanf("%d\n",&n);
	for (i=0;i<=n-1;i++) gets(words[i]);
	for (i=0;i<=n-1;i++)
	{
		len=strlen(words[i]);
		if (words[i][len-1]=='r'&&words[i][len-2]=='e') len=len-2;
		if (words[i][len-1]=='g'&&words[i][len-2]=='n'&&words[i][len-3]=='i') len=len-3;
		if (words[i][len-1]=='y'&&words[i][len-2]=='l') len=len-2;
		for (j=0;j<=len-1;j++) printf("%c",words[i][j]);
		printf("\n");
	}
}
