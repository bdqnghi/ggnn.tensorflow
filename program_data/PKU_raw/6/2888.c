int a[100][100][100];
int main()
{
	int k,m[100],n[100],i,j,t,s[100];
	cin >> k;
	for (i=0;i<k;i++)
		{
			s[i]=0;
			cin >> m[i] >> n[i];
			for (j=0;j<m[i];j++)
				for (t=0;t<n[i];t++)
					cin >> a[i][j][t];
			for (t=0;t<n[i];t++)
				s[i]+=(a[i][0][t]+a[i][m[i]-1][t]);
			for (j=0;j<m[i];j++)
				s[i]+=(a[i][j][0]+a[i][j][n[i]-1]);
			s[i]=s[i]-a[i][0][0]-a[i][0][n[i]-1]-a[i][m[i]-1][0]-a[i][m[i]-1][n[i]-1];
		}
	for (i=0;i<k;i++)
		cout << s[i] << endl;

	return 0;
}