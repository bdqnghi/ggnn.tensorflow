int main()
{
	int a[16];
	int i, j, count = 0;
	while(true)
	{
		cin >> a[0];
		if(a[0] == -1) 
			break;
		i = 1;
		while(true)
		{
			cin >> a[i];
			if (a[i] == 0)
				break;
			i ++;
		}

		count = 0;
		for(i = 0; a[i] != 0; i ++)
		{
			for(j = 0; a[j] != 0; j ++)
			{
				if (a[i] * 2 == a[j])
					count ++;
			}
		}

		cout << count << endl;
	}

	return 0;
}