int main()
{
	int n, i, j, a[100000]={0}, flag = 0;
	cin >> n;
	cin >> i >> j;
	while(i+j)
	{	
		a[j]++;
		cin >> i >> j;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==n-1)
		{
			cout << i << endl;
			flag = 1;
		}
	}
	if(flag == 0)
		cout << "NOT FOUND";
	return 0;

}