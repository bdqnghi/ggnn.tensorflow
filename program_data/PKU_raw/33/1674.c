char st[1000][256];
int n,i,l,j;
int main()
{
    scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
	scanf("%s",st[i]);
	l=strlen(st[i]);
	for (j=0;j<=l;j++)
	{
		if (st[i][j]=='A')
			printf("T");
		else if (st[i][j]=='T')
		    printf("A");
		else if (st[i][j]=='C')
			printf("G");
		else if (st[i][j]=='G')
			printf("C");
	}
	printf("\n");
	}
	return 0;
}



