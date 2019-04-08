int main()
{
	int n,a[11][4],b[60][7],t[7];
	double c[60],t0;
	int i,j,l = 0;
	cin >> n;
	for(i = 1;i <= n;i++)
	{
		for(j = 1;j <= 3;j++)
			cin >> a[i][j];
	}
	for(i = 1;i <= n - 1;i++)
	{
		for(j = i + 1;j <= n;j++)
		{
			l++;
			b[l][1] = a[i][1];
			b[l][2] = a[i][2];
			b[l][3] = a[i][3];
			b[l][4] = a[j][1];
			b[l][5] = a[j][2];
			b[l][6] = a[j][3];
			c[l] = sqrt((a[i][1] - a[j][1]) * (a[i][1] - a[j][1]) +
				        (a[i][2] - a[j][2]) * (a[i][2] - a[j][2]) +
						(a[i][3] - a[j][3]) * (a[i][3] - a[j][3]));
		}
	}
	for(j = 1;j <= n * (n - 1) / 2 - 1;j++)
	{
		for(l = n * (n - 1) / 2 - 1;l >= j;l--)
		{
			if(c[l] < c[l + 1])
			{
				for(i = 1;i <= 6;i++)
				{
					t[i] = b[l][i];
					b[l][i] = b[l + 1][i];
					b[l + 1][i] = t[i];
				}
				t0 = c[l];
				c[l] = c[l + 1];
				c[l + 1] = t0;
			}
		}
	}
	for(l = 1;l <= n * (n - 1) / 2;l++)
	{
		cout << "(" << b[l][1] << "," 
			        << b[l][2] << "," 
					<< b[l][3] << ")" 
	  << "-" << "(" << b[l][4] << ","
                    << b[l][5] << "," 
					<< b[l][6] << ")" 
					<< "=" << fixed << setprecision(2) << c[l] << endl;
	}
	return 0;
}

