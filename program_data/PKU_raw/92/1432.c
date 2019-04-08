int cmp(const void *a, const void *b)
{
	int *c = (int *)a;
	int *d = (int *)b;
	return *c -*d;
}

int main()
{
	int n;
	while(cin>>n)
	{
		if(n == 0)
			return 0;
		int a[1005];
		int b[1005];
		int i;
		for(i = 0; i < n; i++)
			cin>>a[i];
		for(i = 0; i < n; i++)
			cin>>b[i];

		qsort(a, n, sizeof(int), cmp);
		qsort(b, n, sizeof(int), cmp);

		int pi,pj,qi,qj;
		pi = qi =0;
		pj = qj = n-1;

		int sum = 0;
		while(n--)
		{
			if(a[pi] > b[qi])
			{
				sum += 200;
				pi++;
				qi++;
			}
			else if(a[pj] > b[qj])
			{
				sum += 200;
				pj--;
				qj--;
			}
			else
			{
				if(a[pi] < b[qj])
					sum -= 200;
				pi++;
				qj--;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}