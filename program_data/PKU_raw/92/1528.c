int cmp(const void *a, const void *b)
{
	return *(int*)b - *(int*)a;
}
int main()
{
	int n,flag,i,j,bonus,mmax,draw;
	int b[1001],a[1001];


	while (cin>>n)
	{
		if (n==0) break;

		for (i=0;i<n;i++)
			cin>>b[i];
		for(i=0;i<n;i++)
			cin>>a[i];

		mmax=-n;

		qsort(a, n, sizeof(int), cmp);
		qsort(b, n, sizeof(int), cmp);

		for (i=0;i<n;i++)
		{
			flag = 0;draw = 0;

			for(j=0;j<=i;j++)
			{
				if (b[j] < a[n-i-1+j]) flag = 1;
				else if (b[j] == a[n-i-1+j]) draw++;
			}
			if (flag==1) continue;

			bonus = i+1-draw - (n-i-1);

			if (bonus>mmax) mmax = bonus;
		}

		cout<<mmax*200<<endl;
	}
	return 0;
}