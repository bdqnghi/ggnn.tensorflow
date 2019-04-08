int main(){
	int i,a,b,m,n,dk[100][100];
	scanf("%d%d",&m,&n);
    for(a=1;a<=m;a++)
	{
		for(b=1;b<=n;b++)
		{
			scanf("%d",&dk[a][b]);
		}
	}
    for(i=0;i<=n+1;i++)
		dk[0][i]=0;
		dk[m+1][i]=0;
	for(i=0;i<=m+1;i++)
		dk[i][0]=0;
		dk[i][n+1]=0;
    for(a=1;a<m+1;a++)
	{
		for(b=1;b<n+1;b++)
		{
			if((dk[a][b]>=dk[a-1][b])&&(dk[a][b]>=dk[a+1][b])&&(dk[a][b]>=dk[a][b-1])&&(dk[a][b]>=dk[a][b+1]))
			{
			   printf("%d %d\n",a-1,b-1);
			}
		}
	}
return 0;
}