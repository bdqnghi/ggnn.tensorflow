int main()
{
	int n,m,i,j[1000],k,l;
	char c[1000][2255];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",c[i]);
		j[i]=strlen(c[i]);
		for(k=0;k<j[i];k++)
		{
			if(c[i][k]=='A') c[i][k]='T';
			else if(c[i][k]=='T') c[i][k]='A';
			else if(c[i][k]=='C') c[i][k]='G';
			else if(c[i][k]=='G') c[i][k]='C';
		}
		for(l=0;l<j[i];l++)
{
printf("%c",c[i][l]);
if(l==j[i]-1) printf("\n");}
	}
	scanf("%d",&l);
	return 0;
}