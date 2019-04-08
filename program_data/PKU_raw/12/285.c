//**************************************
//*??????                        *
//*???????????              *
//*??????                        *
//*?????11.5                      *
//**************************************




int main()
{
	int a[16];
	for (int i = 0;;)
	{
		cin >> a[i];
		if (a[i] != 0 && a[i] != -1)
		{
			i ++;
			continue;
		}
		else if (!a[i])
		{
			int n = 0;
			for (int j = 0;j <i - 1; j ++)
			{
				for (int k = j + 1; k < i; k ++)
				{
					if (((a[j] / a[k] == 2) && !(a[j] % a[k])) || ((a[k] / a[j] == 2) && !(a[k] % a [j])))
					n ++;
				}
			}
			cout << n << endl;
			i = 0;
			continue;
		}
		else
			break;
	}
	return 0;
}

