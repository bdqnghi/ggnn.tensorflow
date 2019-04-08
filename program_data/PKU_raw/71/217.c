int main()
{
	int n, year, a, b, k, i, t, sum;
	int x[12]={3,1,3,2,3,2,3,3,2,3,2,3};
	int y[12]={3,0,3,2,3,2,3,3,2,3,2,3};
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> year >> a >> b;
		sum = 0;
		if(a>b)
		{
			k = a;
			a = b;
			b = k;
		}
		if((year%4==0&&year%100!=0)||(year%400==0))
		{
			for(t=a-1;t<b-1;t++)				//?????!?a?????x[a-1]!!!
				sum = sum + x[t];
		}
		else
		{
			for(t=a-1;t<b-1;t++)
			
				sum = sum + y[t];
		}
		if(sum%7==0)
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
	return 0;
}
