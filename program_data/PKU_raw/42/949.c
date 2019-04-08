int main()
{
	int n,a[100000] = {0},b[100000] = {0},k,i,j,l = 0,m;
	cin >> n;
	for(i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}
	cin >> k;
	for(j = 0;j < n;j++)
	{
    	if(a[j] != k)
		{
			b[l] = a[j];
			l++;
		}
	}
	for(m = 0;m < l-1;m++)
	{
		cout << b[m] << " ";
	}
	cout << b[l-1] <<endl;
	return 0;
}
