int main ()
{
	int a[80000], b[80000], n, i, j, k, c[80000], flag = 0;
	cin >> n;
	for(i = 0;i <= n - 1;i++)
		c[i] = i;
	for(i = 0; ;i++)
	{
		cin >> a[i] >> b[i];
		if(a[i] == 0 && b[i] == 0) break;
	}
	for(j = 0;j < i;j++)
		c[a[j]] = -1;
	for(j = 0;j < n;j++)
		if(c[j] != -1)
		{
			int num = 0;
			for(k = 0;k < i;k++)
				if(b[k] == j) num++;
			if(num == n - 1) 
			{
				cout << j << endl;
				flag = 1;
			}
		}
	if(flag == 0)  cout << "NOT FOUND" <<endl;
	return 0;
}