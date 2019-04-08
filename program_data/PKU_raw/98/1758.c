
int length(char *p)
{
	char *p2 = p;
	int i = 0;
	for (;;)
	{
		if (*p2++ == 0)
			break;
		i++;
	}
	return i;
}

int main()
{
	int n;
	cin >> n;
	char word[1000][41];
	for (int i = 0; i < n; i++)
	{
		cin >> word[i];
	}
	char *p1 = word[0];
	char *p2 = NULL;
	for (p2 = p1; p1 <= word[n - 1]; p1 = p2 + 41)
	{
		p2 = p1;
		for (int s = -1; s <= 80; p2 += 41)
		{
			if (p2 == word[n])
			{
				p2 += 41;
				break;
			}
			s += length(p2);
			s++;
		}
		p2-= 82;
		cout << p1;
		for (char *p3 = p1+41; p3 <= p2; p3+=41)
		{
			cout << " " << p3;
		}
		cout << endl;
	}
	return 0;
}