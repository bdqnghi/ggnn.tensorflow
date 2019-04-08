int a[305];
int n;
double s;
double ave;
int minn, maxn;
int ans[305], num;
int main()
{
	cin >> n;
	s = 0;
	num = 0;
	cin >> a[0];
	s += a[0];
	minn = a[0]; maxn = a[0];
	for( int i = 1;i < n; i++ )
	{
			cin >> a[i];
			s += a[i];	
			if(minn > a[i]) minn = a[i];
			if(maxn < a[i]) maxn = a[i];
	}
	ave = s / n;
	double t1, t2;
	t1 = ave - minn;
	t2 = maxn - ave;
	if(t1 > t2)
		cout << minn <<endl;
	else if(t1 < t2)
		cout << maxn <<endl;
	else
		cout << minn <<","<< maxn <<endl;
	return 0;
}