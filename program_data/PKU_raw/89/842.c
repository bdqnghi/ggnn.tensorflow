int a[10000];
int main()
{
	int tell, n, i, j, k, *p;
	p = a;
    cin >> n;
	for(i = 0; i < n; i++)
		a[i] = 1;
	while(cin >> i >> j)
		if(i != j)
			*(p + i) = 0;
	for(i = 0; i < n; i++)
		if(a[i])
		{
			cout << i << endl;
			break;
		}
	if(i == n)
		cout << "NOT FOUND" << endl;
	return 0;
}