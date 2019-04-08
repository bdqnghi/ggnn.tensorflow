int main()
{
	int i, flag = 0;
	char *p = NULL;
	char sentence[200];
	cin.getline(sentence,200);
	p = sentence;
	for (i = 0; sentence[i] != '\0'; i++)
	{
		if (sentence[i] != ' ')
		{
			*p = sentence[i];
			p++;
			flag = 1;
			continue;
		}
		if (sentence[i] == ' ' && flag == 1)
		{
			*p = sentence[i];
			p++;
			flag = 0;
		}
	}
	*p = '\0';
    cout << sentence;
	return 0;
}