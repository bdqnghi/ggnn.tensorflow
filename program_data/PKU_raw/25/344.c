
int main ()
{
	int i,j,k,n, remain = 0, index;
	int ans[100000] = {1,0};
	cin >> n;
	for (i = 0; i < n; i++)
	{
		remain = 0;
		for (j = 0; j < 100000; j++)
		{
			ans[j] = 2*ans[j] + remain;
			remain = ans[j] /10;
			ans[j] = ans[j] %10;
		}
	}

	index = 99999;
	while (ans[index] == 0)
		index--;
	for (i = index; i >= 0; i--)
		cout << ans[i];
	cout << endl;


}