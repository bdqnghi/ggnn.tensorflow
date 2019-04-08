//********************************
//*?????   **
//*?????? 1300012934 **
//*???2013.10.31  **
//********************************


int main()
{  
	int a[15] = {0} , n;

	while (1)
	{
		n = 0;
		for (int i = 0; i <= 15; i++)
		{
			cin >> a[i];
			if (a[i] == 0 || a[i] == -1)
				break;
		}
		for (int j = 0; j <= 15; j++)
		{
			if (a[j] == 0 || a[j] == -1)
				break;
			for (int k = j + 1; k <= 15; k++)
			{
				if (a[k] == 0)
					break;
				else if (a[k] * 2 == a[j] || a[j] * 2 == a[k])
					n ++;
			}
		}
		if (a[0] != -1)
		{
			cout << n << endl;
			for (int i = 0; i <= 15; i++)
				a[i] = 0;
			n = 0;
		}
		else 
			break;
	}

	return 0;

}
