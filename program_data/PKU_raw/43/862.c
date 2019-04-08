int main()
{
	int a[10000] = {2};
	int i, j, k, l, m, n;
	cin >> m;
	for (i=1; i<10000; i++)
	{
		for (n=a[i-1]+1; a[i]==0; n++)
			for (j=0; j<i; j++)
			{
				if (n%a[j] == 0)
					break;
				else if (j == i-1)
					a[i] = n;
			}
	}
	for (k=1; a[k]<m; k++)
		for (l=k; a[l]<m; l++)
			if(a[l]+a[k] == m)
				cout << a[k] << " " << a[l] << endl;
	return 0;
}
