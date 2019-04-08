int main()
{
	int n, a[1000]={0}, j=0, i1;
	memset(a,0,sizeof(a));
	a[0] = 1;
	cin >> n;
	for(int i=0; i < n; i++)
	{
		for(int l=0;l < j+1; l++)
		{
			a[l] = 2 * a[l];
		}
		for(int k = j; k >= 0; k--)
		{
			if(a[k] > 9)
			{
				a[k+1] ++;
				a[k] = a[k] -10;
				j++;
			}
			else
			{
				continue;
			}
		}
	}
	for(i1 = j; i1  > 0; i1--)
	{
		if(a[i1] != 0)
		{
			break;
		}
	}
	for(;i1 >=0; i1--)
	{
		cout << a[i1];
	}
	cout << endl;
return 0;
}