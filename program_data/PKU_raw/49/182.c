char b[10000][501];
int main()
{	
	char a[501];
	int i, j, k, l, n, m, o = 0;
	cin.getline(a, 501);
	n = strlen(a);
	for(i = 0; i < n - 1; i++)
		for(j = i + 1; j < n; j++)
		{	int flag = 1;
			if(a[i] == a[j])
			{	k = i;
				l = j;
				for(; k < l; k++, l--)
					if(a[k] != a[l])
					{	flag = 0;
						break;
					}
				if(flag == 1)
				{	for(m = i; m <= j; m++)
						b[o][m - i] = a[m];
					o++;
				}
			}
		}
	for(i = 2; i <= 500; i++)
		for(j = 0; j <= o; j++)
			if(strlen(b[j]) == i)
				cout << b[j] << endl;
	return 0;
}