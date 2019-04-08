// 1134 ?? 1000062708
int main()
{
	int i, j, k, a[16], m ;
	for(i = 0;a[0] != -1;i++)
	{
		int s = 0;
		cin >> a[0];
		if(a[0] == -1) break;
		for(j = 1;j<16;j++)
		{ cin >> a[j];
		if(a[j]==0) break;}
		for(k = 0;a[k] != 0;k++)
		{
			m = 2 * a[k];
			for(j = 0;a[j] != 0;j++)
			{
				if(a[j] == m)
						s++;
			}
		}
	cout << s << endl;
	}
	return 0;
}
