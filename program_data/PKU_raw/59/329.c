int m,n;
int p(char a[200][200])
{
	char b[200][200];
	int q=0,i,j;
	for(i=0;i<n+2;i++)
		for(j=0;j<n+2;j++)
			b[i][j]=a[i][j];
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			if((a[i][j]=='@')||(a[i][j]=='.'&&(a[i][j+1]=='@'||a[i][j-1]=='@'||a[i+1][j]=='@'||a[i-1][j]=='@')))
			{
				b[i][j]='@';
				q++;
			}
		}
	for(i=0;i<n+2;i++)
		for(j=0;j<n+2;j++)
			a[i][j]=b[i][j];
	return q;
}	
int main()
{
	int i,s[200]={0},j;
	char a[200][200],b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    {
		b=getchar();
		for(j=1;j<=n;j++)
		{
			a[i][j]=getchar();
			if(a[i][j]=='@')
				s[1]++;
		}		
	}
	b=getchar();
	scanf("%d",&m);
   	for(i=0;i<n+2;i++)
		a[0][i]=a[n+1][i]='#';
	for(i=0;i<n+2;i++)
		a[i][0]=a[i][n+1]='#';
	for(i=2;i<=m;i++)
		s[i]=p(a);
	printf("%d",s[m]);
}
