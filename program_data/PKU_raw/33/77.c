int main()
{
	int n,i,len,j;
	char s[1000][255];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
		len=strlen(s[i]);
		for(j=0;j<len-1;j++)
		{
			if(s[i][j]=='A') printf("T");
            else if(s[i][j]=='T') printf("A");
            else if(s[i][j]=='G') printf("C");
            else if(s[i][j]=='C') printf("G");
		}
            if(s[i][len-1]=='A') printf("T\n");
            else if(s[i][len-1]=='T') printf("A\n");
            else if(s[i][len-1]=='G') printf("C\n");
            else if(s[i][len-1]=='C') printf("G\n");

	}
	return 0;
}
