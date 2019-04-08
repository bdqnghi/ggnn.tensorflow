int main()
{
	int a[10001], p, m, i, j, sm;
	cin >> m;
	for (i = 1; i <= m; i++) a[i] = 0;
	sm = sqrt(m);
	for (i = 2; i <= sm; i++)
	  if (a[i] == 0) 
	    for (j = 2; i * j < m; j++)
	      a[i * j] = 1;
	for (i = 3; i <= m / 2; i++)
	  if ((a[i] == 0) && (a[m-i] == 0)) 
	    cout << i << ' ' << m - i << endl;
    return(0);
}