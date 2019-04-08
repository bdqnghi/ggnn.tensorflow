int main()
{
	int n ;
	cin>>n;
	for (;n>0;n--)
	{
		int m;
		cin>>m;
		double sum=0;
		double a[100];
		double *p = a;
		for (int i = 0;i<m;i++)
		{

			cin>> *p;
			sum+= *p;
			p++;
		}
		p = a;
		double ava = sum /m;
		double sq = 0;
		for (int i = 0;i<m;i++)
		{
			sq+= (*p-ava)*(*p-ava);
			p++;
		}
		printf("%.5f\n", sqrt(sq/m));

	}

}