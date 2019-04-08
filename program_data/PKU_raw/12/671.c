int main()
{
	
	int a[16], i, j, k, n=0;
	do
	{
		memset(a,0,sizeof(a));
		for (i = 0; i < 16; i++)
		{
			 cin >> a[i];
		     if (a[i] == 0)
				 break;
			 if (a[i] == -1)
				 return 0;
		}
		n = 0;
	    for (k = 0; k <= i-1; k++)
		{
			 for (j = k + 1; j <=i-1; j++)
			{
				if (((a[k] * 2 == a[j]) || (a[k] == (2 * a[j]))) && (a[k] != 0))
					n++;
			}
		}
	    cout << n << endl;
	}while (1);

	return 0;
}
