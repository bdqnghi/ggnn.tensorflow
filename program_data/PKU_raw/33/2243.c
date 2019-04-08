int main()
{
	int n,i,j,len;
	scanf("%d",&n);

	char sz[1000][256];
	
	for (i=0;i<n;i++){
		scanf ("%s",sz[i]);
	}
	for (i=0;i<n;i++){
		len=strlen(sz[i]);
		for (j=0;j<len;j++){
			if (sz[i][j]=='A') sz[i][j]='T';
			else if (sz[i][j]=='T') sz[i][j]='A';
			else if (sz[i][j]=='C') sz[i][j]='G';
			else if (sz[i][j]=='G') sz[i][j]='C';
		}
	} 

	if (n>1){
	  printf ("%s",sz[0]);
	  for (i=1;i<n;i++){
		printf("\n%s",sz[i]);
	  }
        }
	else printf ("%s",sz[0]);

	return 0;
} 