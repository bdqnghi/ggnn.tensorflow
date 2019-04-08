/*
*12-1
*??? 1200012851
*2012.12.11
*????
**/


double dis(int x, int y, int z)
{
	double s;
	s = sqrt(x * x + y * y + z * z);
	return s;
}

int main()
{
	int x[10], y[10], z[10];
	struct distance
	{
		double d;
		int yi;
		int er;
	}d12[45], temp;
	int n, i, j, k = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> x[i] >> y[i] >> z[i];
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			d12[k].d = dis(x[i] - x[j], y[i] - y[j], z[i] - z[j]);
			d12[k].yi = i;
			d12[k].er = j;
			k++;
		}
	}
	for (i = 1; i <= k - 1; i++)
		for (j = 0; j < k - i; j++)
		{
			if (d12[j].d < d12[j + 1].d)
			{
				temp = d12[j + 1];
				d12[j + 1] = d12[j];
				d12[j] = temp;
			}
		}
	for (i = 0; i < k; i++)
	{
		cout << "(" << x[d12[i].yi] << "," << y[d12[i].yi] << "," << z[d12[i].yi] << ")-("
			<< x[d12[i].er] << "," << y[d12[i].er] << "," << z[d12[i].er] << ")=" << fixed <<
			setprecision(2) << d12[i].d << endl;
	}
	return 0;
}
