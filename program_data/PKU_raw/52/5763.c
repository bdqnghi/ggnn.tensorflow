int main()
{
	int n, where;
	cin >> n >> where;
	int num[max];
	for (int i = 0; i < n; i++)
		cin >> num[i];
	int *p = num;
	for (int i = 0; i < n - where; i++)
		*(p + n + i) = *(p + i);
	p = p + n-where;
	for (int i = 0; i < n;i++)
	if (i == 0)
		cout << *(p + i);
	else
		cout << " " << *(p + i);
	



}


