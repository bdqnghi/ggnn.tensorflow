
int main()
{
	int i,j,k,l,n,m,n2,m2;
	int a[100][100],b[100][100],c[100][100];
	cin >> m >> n;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin >> a[i][j];
	cin >> m2 >> n2;
	for(i=0;i<m2;i++)
		for(j=0;j<n2;j++)
			cin >> b[i][j];
	for(i=0;i<m;i++)
		for(j=0;j<n2;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
				c[i][j]+=a[i][k]*b[k][j];
			if (j!=n2-1) cout << c[i][j] << ' ';
			else cout << c[i][j] << endl;
		}

}