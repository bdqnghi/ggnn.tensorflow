int main()
{
	int a[20000],count[100], n, i, j;
	cin >> n;
	for(i = 0; i <n;i++)
		cin >> a[i];
	for(i=0;i<100;i++)
		count[i]=0;
	cout << a[0];
	count[a[0]]++;
	for(i = 0, j = 1; j < n; j++)
	{
		if(count[a[j]] == 0)
		{
			i++;
			a[i] = a[j];
			count[a[j]]++;
		}
	}
	for(j = 1;j <= i;j++)
		cout <<" " << a[j];
	cout << endl;
	return 0;
}
