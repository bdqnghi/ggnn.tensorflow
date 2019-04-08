void output(int);
char word[500];
int len;
int main()
{
	int i;
	cin.getline(word, 500);
	len = strlen(word);
	for (i = 2; i <= len; i++)
		output(i);
	return 0;
}


void output(int i)
{
	int j, k;
	for (j = 0; j <= len - i; j++)
		{	
			k = j;
			while (word[k] == word[2 * j + i - 1 - k] && k < 2 * j + i - 1 - k)
				k++;
			if (k >= 2 * j + i - 1 - k)
			{
				for (k = j; k < j + i; k++)
					cout << word[k];
				cout << endl;
			}
		}
}
