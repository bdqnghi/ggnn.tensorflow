int main()
{
	int n, m, a[301] = {0}, k, i, j;
     while(cin >> n >> m && n != 0)
	 {
        for(i = 1; i <= n; i++)
		    a[i] = 1;
	    j = 0;
		k = 0;
		for (i = 1; i <= n+1; i++)
		{
			if (a[i] == 1)
				j = j+ a[i];
			if (j == m)
			{
				j =0;
				a[i] =0;
				k++;
			}
			if (k == n)
			{
				cout << i << endl;
				break;
			}
			if (i == n+1)
				i =0;
		}

	 }
	return 0;
}