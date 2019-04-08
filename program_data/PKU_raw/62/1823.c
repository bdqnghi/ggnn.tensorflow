int main()
{
	int flag = 1;
	char *p, sentence[100];
	cin.getline(sentence, 100, '\n');
	for(p = sentence ; p <= sentence + strlen(sentence) - 1 ; p ++)
	{
		if(*p != ' ')
		{
			cout << *p;
			flag = 1;
		}
		else if(flag)
		{
			cout << ' ';
			flag = 0;
		}
	}
	return 0;
}