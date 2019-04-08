
int main()
{
	char x[100];
	char n[100];
	char *r, *w;
	r = w = NULL;
	cin.getline(x, 100, '\n');
	for(r = x;*r != '\0';r++)
	{
		if(*r <= '9' && *r >= '0')
		{
			w = n;
			for(;*r <= '9' && *r >= '0';r++)
			{
				*w = *r;
				w++;
			}
			*w = '\0';
			cout << n << endl;
		}
	}
	return 0;
}