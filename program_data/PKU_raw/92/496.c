
int main()
{
	int n;
	while(1)
	{
		int tian[1000];
		int qi[1000];
		cin >> n;
		if (n == 0)
			break;
		for (int i = 0; i < n; i++)
			cin >> tian[i];
		for (int i = 0; i < n; i++)
			cin >> qi[i];
		sort(tian,tian+n);
		sort(qi,qi+n);
		int ans = 0;
		int tianbig = n-1,tiansmall = 0,qibig = n-1,qismall = 0;
		while(n--)
		{
			if (tian[tianbig] > qi[qibig])
			{
				tianbig--;
				qibig--;
				ans+=200;
			}
			else if (tian[tiansmall] > qi[qismall])
			{
				qismall++;
				tiansmall++;
				ans+= 200;
			}
			else
			{
				if (qi[qibig]>tian[tiansmall])
					ans -= 200;
				tiansmall++;
				qibig--;
			}
		}
		cout << ans << endl;
	}
	return 0;
}

