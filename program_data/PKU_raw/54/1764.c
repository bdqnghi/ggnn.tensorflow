double n, k;
int times = 1;
double apple(double,double,double);
int main()
{
	cin >> n >> k;
	for(times  = 1; ;times++)
	{
		if((int)apple(n,k,n) == apple(n,k,n))
		{
			cout << (int)apple(n,k,n) << endl;
			break;
		}
	}
	return 0;
}
double apple(double i, double j, double t)
{
	if(t == 1)
		return times * n + k;		
	else
	{
		return (n/(n-1)) * apple(i,j,--t) + k;
	}
}