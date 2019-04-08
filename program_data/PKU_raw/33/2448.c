int main()
{
	int n,i,j;
	char a[1000][255]={0},b[1000][255]={0};
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%s",a[i]);
		int l=strlen(a[i]);
		for(j=0; j<l; j++)
		{
			if(a[i][j]=='A')
				b[i][j]='T';
			if(a[i][j]=='T')
				b[i][j]='A';
			if(a[i][j]=='C')
				b[i][j]='G';
			if(a[i][j]=='G')
				b[i][j]='C';
		}
		printf("%s\n",b[i]);
	}
	return 0;
}
