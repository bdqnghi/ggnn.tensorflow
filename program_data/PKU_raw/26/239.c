int main()
{
	int count = 0, m;
	char sentence[101] = {0};
	char *p;
	cin.getline(sentence,100);
	p = sentence;
	m = strlen(sentence);
	while(p - sentence < m)
	{
		if(*p != ' ')
		{
			count = 0;
		}
		if(*p == ' ')
		{
			count ++;
		}
		if(count <= 1)
		{
			cout << *p;
		}
		p++;
	}
	return 0;
}