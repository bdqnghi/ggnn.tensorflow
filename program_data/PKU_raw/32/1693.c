char b[101];
void reorder(char a[])
{
	int i, l;
	char temp0;
	l = strlen(a);
	for (i = 0; i <l; i++)
	  b[i] = a[l - i - 1];
}
int main()
{
	char bjs[101][101], js[101][101], temp;
	int i, j, k, p, n, l1, l2, c[101];
	cin >> n;
	for (i = 1; i <= n; i++)
      cin >> bjs[i] >> js[i];
	for (i = 1; i <= n; i++)
	{
		l1 = strlen(bjs[i]);
		l2 = strlen(js[i]);
		reorder(bjs[i]);
		for (j = 0; j < l1; j++)
		  bjs[i][j] = b[j];
		reorder(js[i]);
		for (j = 0; j < l2; j++)
		  js[i][j] = b[j];
		for (j = l2; j < l1; j++)
		  js[i][j] = '0';
		for (j = 0; j < l1; j++)
		{
			if (bjs[i][j] < js[i][j])
			{
				bjs[i][j] += 10;
				bjs[i][j + 1] -= 1;
		    }
		    c[j] = bjs[i][j] - js[i][j];
		}
		for (k = l1 - 1; k >= 0; k--)
		  if (c[k] != 0)
	        break;
		if (k == -1)
	      cout << 0;
	    else 
          for (p = k; p >= 0; p--)
		   	cout << c[p];
	    cout << endl;
    }
	return(0);
}