int main()
{
	int m, n,b[9][9] = {0},c[9][9] ={0},i,j,k;
	cin >> m >> n;
	b[4][4] = m;
	for (k = 1;k <=n;k++)
	{
		for (i = 0;i < 9;i++)
			for (j = 0;j <9;j++)
			{
				if (b[i][j]!=0)
				{
					c[i][j]+=2*b[i][j];
					c[i-1][j-1]+=b[i][j];
					c[i-1][j]+=b[i][j];
					c[i-1][j+1]+=b[i][j];
					c[i][j-1]+=b[i][j];
					c[i][j+1]+=b[i][j];
					c[i+1][j-1]+=b[i][j];
					c[i+1][j]+=b[i][j];
					c[i+1][j+1]+=b[i][j];
					b[i][j] += 0;
				}
			}
			for (i = 0;i <9;i++)
			    for (j = 0;j <9;j++)
				   if (c[i][j] !=0)
				   {
					   b[i][j] = c[i][j];
					   c[i][j] = 0;
				   }
	}
	for (i = 0;i <9;i++)
	{
		cout << b[i][0];
	    for (j = 1;j <9;j++)
			cout <<" " << b[i][j];
		cout << endl;
	}
	return 0;
}