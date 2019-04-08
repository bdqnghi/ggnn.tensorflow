

char a[100];
char b[100];

int main()
{
	char *p;

	cin.getline(a, 100);
	cin.getline(b, 100);

	p = a;

	while(*p != 0)
	{
		if( 'A' <= *p && 'Z' >= *p)
			*p += 32;

		p ++;
	}

	p = b;
	
	while(*p != 0)
	{
		if('A' <= *p && *p <= 'Z')
			*p += 32;

		p ++;
	}

	if(strcmp(a, b) == 0)
		cout << '=' << endl;
	else if(strcmp(a, b) < 0)
		cout << '<' << endl;
	else
		cout << '>' << endl;

	
}
