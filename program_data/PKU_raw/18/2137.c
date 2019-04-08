int row(int a[][100],int l,int m)
{
	int i,min=a[m][0];
	for(i=0;i<l+1;i++)
		if(min>a[m][i]) min=a[m][i];
	return min;
}
int line(int a[][100],int l,int m)
{
	int i,min=a[0][m];
	for(i=0;i<l+1;i++)
		if(min>a[i][m]) min=a[i][m];
	return min;
}
void move(int a[][100],int l)
{
	int i,j;
	for(i=1;i<l+1;i++)
	{a[0][i]=a[0][i+1];a[i][0]=a[i+1][0];}
	for(i=1;i<l+1;i++)
		for(j=1;j<l+1;j++)
		a[i][j]=a[i+1][j+1];
}
int main ()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int l,a[100][100]={0},sum=0,x,y;
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				scanf("%d",&a[j][k]);
		for(l=n-1;l>=0;l--)
		{
			for(x=0;x<l+1;x++)
			{
				int d=row(a,l,x);
				for(y=0;y<l+1;y++)
					a[x][y]=a[x][y]-d;
			}
			for(x=0;x<l+1;x++)
			{
				int e=line(a,l,x);
				for(y=0;y<l+1;y++)
			        a[y][x]=a[y][x]-e;
			}
			sum+=a[1][1];	
			move(a,l);
		}
		printf("%d\n",sum);
	}
}
