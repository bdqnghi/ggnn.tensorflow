void main()
{
	int n,i,j,k; char s[15];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",s);
		k=strlen(s);
		if(s[k-1]=='r')k=k-3;
		if(s[k-1]=='y')k=k-3;
		if(s[k-1]=='g')k=k-4;
		for(j=0;j<=k;j++)
		printf("%c",s[j]);
		printf("\n");
	}
}