//3704:??????
//2010?11?13?
//1000012753 ???
int main()
{
	char str[200];
	int i, j, k, ei, bi, l;
	while (cin.getline(str, 150))
	{  
		int strout[101] = {0};
		l = strlen(str);
		for (i = 0; i < l; i++)
		{
			if (str[i] == '(')
				strout[i] = -1;
			else if(str[i] == ')')
				strout[i] = 1;
		}
		for (i = 0; i < l; i++)
		{
			if (strout[i] != -1)
				continue;
			for (j = i + 1; j < l; j++)
			{
				if (strout[j] != 1)
					continue;
				for (k = j; k >= i; k--)
				{
					if (strout[k] == -1)
					{
						strout[k] = 0;
						strout[j] = 0;
						break;
					}
				}
			}
		}
		cout << str << endl;
		bi = l - 1;
		ei = 0;
		for (i = 0; i < l; i++)
			if (strout[i] != 0)
			{
				bi = i;
				break;
			}
		for (i = l - 1; i >= 0; i--)
			if (strout[i] != 0)
			{
				ei = i;
				break;
			}

		for (i = bi; i <= ei; i++)
		{
			if (strout[i] == 0)
				cout << ' ';
			else if (strout[i] == -1)
				cout << '$';
			else
				cout << '?';
		}
		cout << endl;
	}

	return 0;
}