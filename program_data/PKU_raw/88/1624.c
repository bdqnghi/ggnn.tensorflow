int main()
{
	char ch[31];
	int i , len;
	cin.getline( ch , 31 , '\n');
	len = strlen(ch);
	for (i = 0 ; i <= len - 2 ; i++)
	{
		if ((ch[i] >= 48)&&(ch[i] <= 57))
		{
			if ((ch[i + 1] >= 48)&&(ch[i + 1] <= 57))
			{
				cout << ch[i];
			}
			else 
			{
				cout << ch[i] << endl;
			}
		}
	}
	if ((ch[len - 1] >= 48)&&(ch[len - 1] <= 57))
	{
		cout << ch[len - 1] << endl;
	}
	return 0;
}