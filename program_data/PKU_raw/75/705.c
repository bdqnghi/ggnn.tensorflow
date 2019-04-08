int main()
{
	int x[1000], y[1000], p[1000] = {0}, n, i, j;
	cin >> x[0];
	i = 1;
	while (cin.get() != '\n')
	  cin >> x[i++];
	n = i;
	for (i = 0; i < n; i++)
	{
		cin >> y[i];
		cin.get();
		for (j = x[i]; j < y[i]; j++)
		  p[j]++;
	}
	i = 0;
	for (j = 1; j < 1000; j++)
	  if (p[j] > p[i])
	    i = j;
	cout << n << ' ' << p[i];
	return(0); 
 } 