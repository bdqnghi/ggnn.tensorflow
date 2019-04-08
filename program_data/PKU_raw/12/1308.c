
int main()
{
	int n;
	int num[100];
	int test,count=0;
	

	cin >> n;
	while(n != -1)
	{
		num[0] = n;
		for (int i = 1; n != 0; i++)
		{
			cin >> n;
			num[i] = n;
		}
		for (int j = 0; num[j] != 0; j++)
		{
			test = num[j];
			for (int k = 0; num[k] != 0; k++)
			{
				if (num[k] == 2 * test)
				{
					count++;
				}
			}//end for k
		}//end for j
		cout << count << endl;
		count=0;
		cin >> n;
	}

	return 0;
}
