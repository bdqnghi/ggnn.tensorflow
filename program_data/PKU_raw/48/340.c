void p(int a[9][9])
{
	int b[9][9],i,j,x,y;
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
			b[i][j]=a[i][j];
	for(i=1;i<8;i++)
		for(j=1;j<8;j++)
		{
			for(x=-1;x<=1;x++)
	        	for(y=-1;y<=1;y++)
					b[i+x][j+y]+=a[i][j];
		}
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
			a[i][j]=b[i][j];
}
int main()
{
	int a[9][9]={0},m,n,i,j,k;
	scanf("%d%d",&m,&n);
	a[4][4]=m;
	for(k=0;k<n;k++)
		p(a);
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
			printf("%d%c",a[i][j],(j==8)?'\n':' ');
}

