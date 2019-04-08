
int main()
{
	int k, h[25];
	int len[25];
	int i, j;
	cin >> k;
	for(i = 0; i < k; i ++)
		cin >> h[i];
	len[0] = 1;
	int ans = 1;
	for(i = 1; i < k; i ++)
	{
		/*if(h[i] <= h[i - 1])
			len[i] = len[i - 1] + 1;
		else
			len[i] = 1;
		if(len[i] > ans)
			ans = len[i];*/
		int temp = -1, tIndex = -1;
		for(j = 0; j < i; j ++)
		{
			if(h[j] >= h[i])
			{
				if(len[j] > temp)
				{
					temp = len[j];
					tIndex = j;
				}
			}
		}
		if(temp == -1)
			len[i] = 1;
		else
			len[i] = len[tIndex] + 1;
		if(len[i] > ans)
			ans = len[i];
	}
	cout << ans << endl;
	return 0;
}