
int main()
{
	int a[15], count = 0;
	int i, j, k;
	for (i = 0; ; i++)
	{
		cin >> a[i];
		if (a[0] == -1) 
			break;
		else if (a[i] == 0)
		{
			for (j = 0; j < i; j++)
				for (k = 0; k < i; k++)
				{
					if (a[k] == a[j] * 2)
						count++;
				}
				cout << count << endl;
				count = 0;
				i = -1;
		}
	}
	
	return 0;
}
