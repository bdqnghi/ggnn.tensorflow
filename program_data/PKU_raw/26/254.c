int main()
{
	char a[100], *p;
	int i, count;
	cin.getline(a, 100);
	count = 0;
	for(p = a; *p != '\0'; p++)
	{
		if(p == a)
			continue;
		if(*p == ' ')
			count++;
		if(*p != ' ' && *(p - 1) == ' ')
		{
			count = count - 1;
			for(p = p - count, i = 0; ; i++)
			{
				p[i] = p[i + count];
				if(p[i] == '\0')
					break;
			}
			count = 0;
		}
	}
	cout << a << endl;
	return 0;
}
