/*         1134 ??
??????      2010.11.03     */
int main()
{
	int i, j, l, k, s, t;
	int a[100000] = {0}, b[100000];//b?????????
	for(i = 0; i < 100000; i++)
	{
		cin >> a[i];
		if(a[i] == -1)
			break;
	}
	s = 0;//s????????????
	for(i = 0; i < 100000; i++)
	{
		t = 0;//t????????????
		for(j = 0; j < 10000; j++)
		{
			b[j] = a[s];
			s++;
			if(b[j] == 0)
			{
				for(k = 0; k <= j; k++)
					for(l = k + 1; l <= j; l++)
						if((b[k] == 2 * b[l]) || (b[l] == 2 * b[k]))
							t++;
				cout << t << endl;
				break;
			}
		}
		if(a[s] == -1)
			break;
	}
	return 0;
}
