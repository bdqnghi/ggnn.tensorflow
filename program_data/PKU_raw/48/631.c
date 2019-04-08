int n,m;

void num(int a[11][11],int b[11][11],int c)
{
	int w;
	for(w=0;w<11;w++)
	{
		a[0][w] = 0;
		a[w][0] = 0;
		b[0][w] = 0;
		b[w][0] = 0;
		a[10][w] = 0;
		a[w][10] = 0;
		b[10][w] = 0;
		b[w][10] = 0;
	}
	int i,j,p,q;
	if(c==n+1)
	{
		for(p = 1;p<=9;p++)
		{
		   for(q=1;q<=8;q++)
		   {
	     		cout << m*a[p][q]<<" " ;
		   }
			cout << m*a[p][9]<< endl;
		}
		return;
	}
	else
	{
		for(i=1;i<=9;i++)
			for(j=1;j<=9;j++)
				b[i][j] = 2*a[i][j]+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
		num(b,a,c+1);
	}
}
int main()
{   
	int i,j;
	int bac1[11][11]={0},bac2[11][11] = {0};
    bac1[5][5] = 1;
	cin >> m >> n;
	num(bac1,bac2,1);
	return 0;
}



