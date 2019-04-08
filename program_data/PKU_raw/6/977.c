int main()
{
	void jisuan(int array[100][100],int x,int y);
	int k,i,m,n,p,q,a[100][100];
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d%d",&m,&n);
		for(p=0;p<m;p++)
		{
			for(q=0;q<n;q++)
			{scanf("%d",&a[p][q]);}
		}
		jisuan(a,m,n);
	}
}
void jisuan(int array[100][100],int x,int y)
{
	int i,j,a,b,c,d,sum;
	for(j=0,a=0;j<y;j++)
	{a=a+array[0][j];}
	for(i=1,b=0;i<x;i++)
	{b=b+array[i][y-1];}
	for(j=y-2,c=0;j>=0;j--)
	{c=c+array[x-1][j];}
	for(i=x-2,d=0;i>0;i--)
	{d=d+array[i][0];}
	sum=a+b+c+d;
	printf("%d\n",sum);
}