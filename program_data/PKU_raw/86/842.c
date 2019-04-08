int s(int);
int main()
{
	int n, k;
	cin >> n;
	while(n--)
	{
		cin >> k;
		cout << s(k) << endl;
	}
	return 0;
}
int s(int k)
{
	int i, j, a[15], total = 0;
	for(i = 0; i <= k - 1; i++)
		cin >> a[i];
	int t = 0;
	for(i = 0; i <= k - 1; i++)
	{
		if(t < 60)
			t = a[i] + 3 * (i + 1);
		else
			break;
	}
	j = i - 1;
	if(t <= 60) //t<=60????????????
		total = 60 - 3 * (j + 1);
	else 
	{
		if(a[j] + 3 * j > 63)
			total = 60 - 3 * j;
		else
			total = a[j];
	}
	return total;
}