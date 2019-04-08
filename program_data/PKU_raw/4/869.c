int main()
{
	int m, n, i = 1, j = 1;
	int tempi=1, tempj = 1, a[100][100]={0};
	cin>>m>>n;
	for(int s=1;s<=m;s++)
		for(int t=1;t<=n;t++)
			cin>>a[s][t];
	while(tempi != m || tempj != n)
	{
		do
		{
			cout<<a[i][j]<<endl;
		    i++;
			j--;
		} while(j != 0 && i != m + 1 );
	    if(tempj != n)
		{
			tempj++;
			i = tempi;
			j=tempj;
		}
		else
		{
			tempi++;
			i=tempi;
			j=tempj;
		}
	}
	cout<<a[m][n];
	return 0;
}
