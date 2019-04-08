int main()
{
	int a,i,j,k,n;
	double f[15];
	cin >> a;
	while (a != -1)
	{
		i = 0;
	    while (a != 0)
		{
			f[i] = a;
     	    i++;
			cin >> a;
		}
		j = i;
		n = 0;
		for (i = 0 ; i < j ; i++)
		{
			for (k = i + 1 ; k < j ; k++)
			{
				f[k] = f[k]*1.0;
				if ((f[k] / f [i]) == 2.0 || (f[i] / f [k]) == 2.0)
					n = n + 1;
			}
		}
		cout << n << endl;
		cin >> a;
	}
	cin.get();
    cin.get(); //????
	return 0;
}