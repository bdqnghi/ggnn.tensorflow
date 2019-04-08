//********************************
//*???? 
//********************************


int f(int a, int b)
{
	if (a == 1)
		return 1;
	else
	{
		int c,d,i;
		c = 0;
		d = (int)sqrt((double)a);
		for (i = b; i <= a; i ++)
		{
			if (!(a % i))
				c+= f(a / i,i);
		}
		return c;
	}
}

int main()
{
	int n,a,i;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a;
		cout << f(a,2) << endl;
	}
	cin.get();
    cin.get(); //????
	return 0;
}
