int a[9][9]={0},b[9][9]={0};
void copy(int a[9][9],int b[9][9])
{
	for (int i = 0;i<9;i++)
		for(int j=0;j<9;j++)
			a[i][j] = b[i][j];
}
int main()
{
	int m,n,j,k;
	cin >>m>>n;
	a[4][4] = m;
	b[4][4] = m;
	for(int i =0;i<n;i++)
	{
		for( j=4-i;j<=4+i;j++)
			for( k=4-i;k<=4+i;k++)
				for(int l = j -1;l<=j+1;l++)
					for(int m = k-1;m<=k+1;m++)
						b[l][m] += a[j][k];
		copy(a,b);
	}
	for(k = 0;k<9;k++)
		for(j=0;j<9;j++)
		{
			cout <<a[k][j];
			if(j<8)
				cout<<' ';
			else cout<<endl;
		}
		return 0;
}