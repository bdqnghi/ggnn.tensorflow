void main()
{
	char s[50][20];
	int i,j,n;
	scanf("%s",s[0]);
	for (i=1,n=0;getchar()!='\n';i++)
	{
		scanf("%s",s[i]);
		n++;
	}
    for (j=n;j>=0;j--)
	{
		printf("%s",s[j]);
		if (j>0)
			printf(" ");
}
}