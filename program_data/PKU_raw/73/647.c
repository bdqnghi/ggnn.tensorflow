int main()
{
	int c[6][6], a[6], b[6], i, j, n = 0;//??a??????????????b????????????n???????? 
	for (i = 1; i <= 5; i++)
	  for (j = 1; j <= 5; j++)
	    cin >> c[i][j];
	for (i = 1; i <= 5; i++)
	{
		a[i] = 1;
		b[i] = 1;
		for (j = 2; j <= 5; j++)
		{
			if (c[i][j] > c[i][a[i]])
			  a[i] = j;
			if (c[j][i] < c[b[i]][i])
			  b[i] = j;
		}
	}
	for (i = 1; i <= 5; i++)
	  if (b[a[i]] == i)
	    {
	    	cout << i << ' ' << a[i] << ' ' << c[i][a[i]] << endl;
			n++; 
	    }
	if (n == 0)
	  cout << "not found";
	return(0);
}