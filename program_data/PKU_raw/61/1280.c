
int f(int i, int j)
{
	int k;
	k = i + j;
	return k;
}

int main ()
{
	int n,a,b,c,i,j,k;
	cin >> n;
	for (b = 1; b<= n; b++)
	{
		cin >> a;
		if (a == 1 || a == 2)
			cout << "1" << endl;
		else
		{
			i = 1;
			j = 1;
			for (c = 2; c < a; c++)
	        {
				k = f(i,j);
				i = j;
				j = k;
			}
			cout << j << endl;
		}
	}
	    return 0;
}