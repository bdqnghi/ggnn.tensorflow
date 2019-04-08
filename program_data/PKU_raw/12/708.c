// ???:??
// ??:????
// ????:2011.10.25
int main()
{
	int a[16], i, j, temp, count ;
	i=0;
	while (cin>>a[0])
	{
		count=0;
		if (a [0] == -1)
			break;
        i=1;
		while (cin >> a [i])
		{
			if (a [i] < 1)
			{
				temp = i;
				break;
			}
			i ++;
		}
		for (i = 0; i < temp - 1; i ++)
		{
			for (j = i + 1; j < temp ; j ++)
			{
				if (a [i] == 2 * a [j] || a [j] == 2 * a [i])
				{
					
					count ++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}
