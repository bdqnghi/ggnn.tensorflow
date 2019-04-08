//*************************
//*???????????*
//*??????   * 
//*???11/10/28* 
//*******************
int main()
{
	int n, k, m = 0; 
	cin >> n; 
	if(n < 1 || n > 100000) return 0;
	int a[n]; 
	for(int y = 0; y < n; y ++) 
		cin >> a[y];
	cin >> k; 
	for (int i = 0; i < n; i ++)
	{
		if (a[i] == k)
		{
			for (int j = i; j < n; j ++)
			{
				a[j] = a[j + 1]; 
			}
			i --; m ++; 
		}
	}
	cout << a[0]; 
	for (int x = 1; x < n - m; x ++)
	cout << " " << a[x]; 
	cout << endl; 
	return 0; 
} 