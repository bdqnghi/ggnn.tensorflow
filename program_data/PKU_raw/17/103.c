int main()
{
	char word[200] = {'\0'};//??????
	int left[200] = {0};//??????????
	int i = 0, k = 0;
	while (cin.getline(word, 200))
	{
		for (i = 0; word[i]; i ++)//???
			cout << word[i];
		cout << endl;
		for (i = 0; word[i]; i ++)//????
		{
			if (word[i] == '(')//??????????left?
			{
				left[k] = i;
				k ++;
				word[i] = '$';
			}
			else if (word[i] == ')')//?????left????????
			{
				if (k)
				{
					k --;
					word[left[k]] = ' ';
					word[i] = ' ';
				}
				else
					word[i] = '?';
			}
			else//???????
				word[i] = ' ';
		}
		for (i = 0; word[i]; i ++)//???
			cout << word[i];
		cout << endl;
		k = 0;
		memset(word, '\0', sizeof(word));
	}
	return 0;
}