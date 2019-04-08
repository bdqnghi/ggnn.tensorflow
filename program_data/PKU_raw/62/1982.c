
int main()
{
	char input[100], *p = NULL, *q = NULL;
	int length;
	cin.getline(input, 100);
	length = strlen(input);
	for (p = input + 1; p < input + length; p++)
	{
		if (*p == ' ' && *(p - 1) == ' ')		//??????????????????????????
		{
			for (q = p; *q != '\0'; q++)
			{
				*q = *(q + 1);
			}
			p--;
		}
	}
	cout << input << endl;
	return 0;
}