int main()
{
	struct people
	{
		int k;
		int kn;
	}p[10001];
	int n, p1, p2, m=0, i;
	for (i=0;i<n;i++)
	{
		p[i].k=0;
		p[i].kn=0;
	}
	cin >> n;
	for (i=0;i<n*n;i++)
	{
		cin >> p1 >> p2;
		if (p1==0&&p2==0)
			break;
		else
		{
			p[p1].k++;
			p[p2].kn++;
		}
	}
	for (i=0;i<n;i++)
	{
		if (p[i].k==0&&p[i].kn==n-1)
		{
			m++;
			cout << i;
		}
	}
	if (m==0)
		cout << "NOT FOUND";
	return 0;
}

