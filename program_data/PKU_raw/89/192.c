int main()
{
	int n,i,j,m = -1;
	int a[10000]={0},b[10000]={0};
	cin >> n;
	while (cin >> i >> j)
	{
		if (i == 0 && j == 0) break;
		a[i]++;
		b[j]++;
	}
	for (i = 0 ; i < n ; i ++)
	{
		if(a[i] == 0 && b[i] == n-1 )
		{
			if (m == -1)
			{
				m = i;
			}
			else
			{ 
				m = -1;
				break;
			}
		}
	}
	if (m == -1)
	{
		cout <<"NOT FOUND"<<endl;
	}
	else cout << m <<endl;
}