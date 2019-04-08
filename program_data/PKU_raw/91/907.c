//4.cpp
//??????????
//?????
//???12?7?


int main()
{
	char s[200];
	char a;
	char *p;
	cin.getline(s,200);
	p = s;
	while (*p != '\0')
	{
		if (*(p+1) == '\0')
		{
			a = *p + s[0];
			cout << a;
		}
		else
		{
			a = *p + *(p+1);
			cout << a;
		}
		p++;
	}
	return 0;
}
