int fj(int a, int b);

int main()
{
	int n, i, a;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> a;
		cout << fj(a, 2) << endl;
	}

	return 0;
}
int fj(int a, int b)
{
	int j, x, sum = 1, f = 0;
	x = sqrt((double) a);
	if((a == 1) || (a == 2) || (a == 3))
		return 1;
	else
	{
	    for(j = b; j <= x; j++)
	    {
		    if(a % j == 0)
			{
			    sum += fj(a / j, j);
				f = 1;
			}
    	}
		if (f == 0)
	        return 1;
		else
			return sum;
	}
}