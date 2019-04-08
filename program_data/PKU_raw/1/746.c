
/*
????
??
	?????????????
	f[i,j]????i????j?????????
	??????????
	i?j????N?????O(sqrt(n))???
?????
	?????O(n^(3/2))
	?????O(n)
*/
int main()
{
	int f[200][200] = {0};
	int div[40000] = {0};
	int divth[200] = {0};
	int kase = 0;
	cin >> kase;
	for (; kase > 0; kase --)
	{
		int n = 0;
		cin >> n;
		memset(f,0,sizeof(f));
		memset(div,0,sizeof(div));
		memset(divth,0,sizeof(divth));
		int m = 0;
		for (int i = 1; i <= n; i ++) 
			if (n % i == 0) 
			{
				div[i] = ++m;
				divth[m] = i;
			}
		f[1][1] = 1;
		for (int i = 2; i <= m; i++)
			for (int j = 2; j <= i; j++)
				for (int k = j; k > 1; k--)
					if (divth[i] % divth[k] == 0)
					{
						int ii = divth[i] / divth[k];
						int jj = k;
						if (div[ii] < jj) jj = div[ii];
						f[i][j] += f[div[ii]][jj];
					}
		cout << f[m][m] << endl;
	}
	return 0;
}	