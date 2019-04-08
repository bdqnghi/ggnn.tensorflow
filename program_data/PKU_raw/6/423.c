//******************************
//*??????????????*
//*??????                *
//*???1000012808            *
//******************************
void clear(int z[][100], int x, int y);                                     //???????0
int main()
{
	int k, i, s, j, m, n, a[100][100];                                       //k??????m?n??????
	cin>>k;
	for(i = 0; i < k; i++)
	{
		int sum = 0;
		cin>>m>>n;
		clear(a,m,n);                                                         //????
		for(j = 0; j < m; j++)
		{
			for(s = 0; s < n; s++)
				cin>>a[j][s];
		}
		for(j = 0; j < n; j++)
			sum = sum + *(*(a + 0) + j);
		for(j = 0; j < n; j++)
			sum = sum + *(*(a + m - 1) + j);
		for(j = 1; j < m - 1; j++)
			sum = sum + *(*(a + j));
		for(j = 1; j < m - 1; j++)
			sum = sum + *(*(a + j) + n - 1);
		cout<<sum<<endl;                                                    //????????
	}
	return 0;
}
void clear(int z[][100], int x, int y)
{
	int i, j;
	for(i = 0; i < x; i++)
	{
		for(j = 0; j < y; j++)
			z[i][j] = 0;
	}
}


