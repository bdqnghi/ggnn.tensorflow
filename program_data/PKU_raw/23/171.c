void main()
{
	char A[101],B[101][101];
	gets(A);
	int i,l,j,k,m;
	l=strlen(A);
	j=0;
	m=0;
	for(i=0;i<=l;i++)
	{
		if(A[i]==32||i==l)
		{
			for(k=m;k<i;k++)
				B[j][k-m]=A[k];
			B[j][k-m]='\0';
			j++;
			m=i+1;
		}
	}
	for(i=j-1;i>0;i--)
	{
		for(k=0;B[i][k]!='\0';k++)
			printf("%c",B[i][k]);
		printf(" ");
	}
	for(k=0;B[i][k]!='\0';k++)
		printf("%c",B[i][k]);
}