void getmarried (char str[], int num, char, char, int);
int main()
{
	char str[101];
	cin.getline(str, 101);
	int l = strlen(str);

	char b = str[0], g = str[l - 1];

	getmarried (str , 1, b, g , l);
}

void getmarried (char str[], int num, char b, char g, int l)
{
	if (str[num] == g)
	{
		for (int j = num - 1 ; j >= 0 ; j--)
		{
			if (str[j] == b)
			{
				cout << j << ' ' << num << endl;
				str[num] = str[j] = '#';
				break;
			}
		}
	}
	if (num < l - 1)
		return getmarried(str, num + 1, b, g , l);
}