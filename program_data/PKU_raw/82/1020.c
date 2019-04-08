int main()
{
	int n, i;
	int time=0, max=0;
	cin >> n;
	int a[100], b[100];
	for(i=1;i<=n;i++)
	{
		cin >> a[i] >> b[i];
	    if(a[i]>=90 && a[i]<=140 && b[i]>=60 && b[i]<=90)
		{
			time=time+1;
			if(max<time)
			{
				max=time;
			}
		}
		else
		{
			time=0;
		}
	}
	cout << max << endl;
	return 0;
}

