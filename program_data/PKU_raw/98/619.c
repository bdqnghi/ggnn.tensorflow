void compose_word(char word[1000][25], int number)
{
	int count = 0, len = 0, first = 0, i = 0;//count????????????????len?????????,first?????????
	len = strlen(word[0]);
	for (i = 0; i < number;)
	{
		while (len + count < 80)
		{
			if (first)
			{
				cout << ' ';
				count ++;
			}
			else
				first = 1;
			cout << word[i];
			count += len;
			i ++;
			if (i >= number)
				break;
			len = strlen(word[i]);
		}
		cout << endl;
		count = 0;
		first = 0;
		if (i >= number)
			break;
	}
}
int main()
{
	int number = 0, i;//number????????
	cin >> number;
	getchar();
	char word[1000][25] = {'\0'};
	for (i = 0; i < number; i ++)
		scanf("%s",word[i]);
	compose_word(word,number);//????
	return 0;
}