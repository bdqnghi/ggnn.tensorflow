
int main()
{
	int n, m, f, i, j;
	m = f = 0;
	char sex[50][10];
	double hm[40], hf[40], t;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> sex[i];	
		if(sex[i][0] == 'm')
		{
			cin >> hm[m];
			m++;
		}
		else
		{
			cin >> hf[f];
			f++;
		}
	}
	for(i = 0; i <= m - 1; i++)
	{
	for(j = 0; j <= m - i - 2; j++)
	{
		if(hm[j] < hm [j+1])
		{
			t = hm[j+1];
			hm[j+1] = hm[j];
			hm[j] = t;
		}
	}
	}
	for(i = 0; i <= f - 1; i++)
	{
	for(j = 0; j <= f - i - 2; j++)
	{
		if(hf[j] < hf[j+1])
		{
			t = hf[j+1];
			hf[j+1] = hf[j];
			hf[j] = t;
		}
	}
	}
	for(int k = m-1; k >= 0; k--)
		cout << fixed << setprecision(2) << hm[k] << " ";
	for(int l = 0; l < f-1; l++)
		cout << fixed << setprecision(2) << hf[l] << " ";
	cout << fixed << setprecision(2) << hf[f-1] << endl;

	return 0;
}
