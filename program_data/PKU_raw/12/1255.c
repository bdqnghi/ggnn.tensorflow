int main()
{
    int a[16];
    int i = 0, n = 0, j, k, m;
    for (m = 1; ; m++)
	{
	    i = 0;
		n = 0;
		while (cin >> a[i])
		{	
		   if (a[i] == 0 || a[i] == -1)
		   {
		       break;
		   }
           else
		   {
		       i++;
		   }
		}
        if (a[0] == -1)
		{
			break;
		}
		for (j = 0; j < i - 1; j++)
			for (k = j + 1; k <= i - 1; k++)
			{
				if (a[k] == 2 * a[j] || a[j] == 2 * a[k])
				{
					n++;
				}
			}
	    cout << n << endl;		
	}
	return 0;
}