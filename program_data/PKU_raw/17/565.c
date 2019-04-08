
int main()
{
	char a[101];
	int left, right, pos[101], pos1[101], i;
	while (cin >> a)
	{
		left = right = 0;
		memset (pos, 0, sizeof (pos));
		cout << a << endl;
		for (i = 0; a[i] != '\0'; i++)
		{
			if (a[i] == '(')
			{
				left++;
				pos[left] = i;
			}
			if (a[i] == ')')
			{
				if (left == 0)
				{
					right++;
					pos1[right] = i;
				}
				else
				{
					pos[left] = 200;
					left--;
				}
			}
		}
		for (i = 1; i <= left; i++)
			a[pos[i]] = 1;
		for (i = 1; i <= right; i++)
			a[pos1[i]] = 2;
		for (i = 0; a[i] != '\0'; i++)
		{
			if (a[i] != 1 && a[i] != 2)
				cout << " ";
			else
			{
				if (a[i] == 1)
					cout << "$";
				else
					cout << "?";
			}
		}
		cout << endl;
	}

	return 0;
}