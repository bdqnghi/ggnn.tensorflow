/*
 * file : 1.cpp
 * author : ??? 1200012911
 * time ?2012.10.29
 * function : ????
 */



int main()
{
	int a[17] = {0}, count;           //????????
	int i, j, k, two, num;
	for (k = 1; ; k++)
	{
		count = 0;                   //?????
		for (i = 1; i <= 16; i++)
		{
			cin >> a[i];
			if (a[1] == -1 || a[i] == 0)
			{
				num = i;             //????????
				break;
			}
		}
		if (a[1] == -1)
			break;                   //?????-1????
		for (i = 1; i < num; i++)
		{
			two = 2 * a[i];          //????????
			for (j = 1; j < num; j++)
				if (two == a[j])         //?????
				{
					count++;
					break;
				}
		}
		cout << count << endl;
	}
	return 0;
}