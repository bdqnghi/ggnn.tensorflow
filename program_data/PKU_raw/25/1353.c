//**********************
//*?????2?N??
//*?????? 1300012850
//*???2013/11/19
//***********************
int main()
{
	int a[10000], n, sum = 1, i, k;
	cin >> n;
	for(int i = 1; i < 10000; i++)
		a[i] = 0;
	a[0] = 1;
	for(k = 1; k <= n; k++)
	{
		for(i = 0; i < sum; i++)
			a[i] *= 2;
		for(i = 0; i < sum; i++)
		{
			if(a[i] >= 10)
			{
				a[i+1]=a[i+1]+a[i]/10;
			if(i+1==sum)
				sum++;
			a[i]=a[i]%10;
			}
		}
	}
	for(i=sum-1;i>=0;i--)
		cout << a[i];
	cout << endl;
	return 0;
}