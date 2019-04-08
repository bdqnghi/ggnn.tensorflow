void prt(int a[100][100],int i,int j,int m,int n)
{	static int t=0;
	printf("%d\n",a[i][j]);
	if(i==m-1||j==0)
	{	t++;
		if(t<n)prt(a,0,t,m,n);
		else if(t<m+n-1)prt(a,t-n+1,n-1,m,n);
	}
	else prt(a,i+1,j-1,m,n);	
}
void main()
{
	int i,j,m,n,a[100][100];
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{	scanf("%d",&a[i][j]);}
	prt(a,0,0,m,n);
}