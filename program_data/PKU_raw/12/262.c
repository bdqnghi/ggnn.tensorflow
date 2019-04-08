/*
	file 1134??
    name ???
	date 11.5
	function ??2?15????????????????????????????????????????????
*/
int main()
{
	int a[16], sum = 0, i, j, n = 0;
	while(1)
	{
		for(i = 0; i < 16; i++)
		{
			cin >> a[i];
			if(a[i] == 0)
			{
				break;
			}
			else if(a[i] == -1)
			{
				break;
			}
			else
			{
				n++;
			}
		}
		if(a[0] == -1)
		{
			break;
		}
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			{
				if(a[i] == a[j] * 2)
				{
					sum++;
				}
			}
		}
		cout << sum << endl;
		n = 0; sum = 0;
	}
	return 0;
}