

int main()
{
	char input[1001] = {0};
	cin >> input;
	int i, count = 0;
	char c = toupper(input[0]);
	for (i = 0; i < strlen(input); i++)
	{
		if (input[i] == c || toupper(input[i]) == c)
			count++;
		else
		{
			cout << '(' << c << ',' << count << ')';
			count = 1;
			c = toupper(input[i]);
		}
	}
	cout << '(' << c << ',' << count << ')' << endl;
	return 0;
}