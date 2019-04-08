

char key[3][10] = {"er", "ly", "ing"};

int main()
{
	int n;
	int l;
	char *p;
	char c[50];

	cin >> n;

	while(n --)
	{
		cin >> c;

		l = strlen(c);

		p = c + l - 2;

		if(strcmp(p, key[0]) == 0 || strcmp(p, key[1]) == 0)
			*p = 0;
		else
			*(p - 1) = 0;

		cout << c << endl;
	}
	
}