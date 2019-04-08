
char c[150];
int c1[150] = {0};
int lc;
char m;

void que(int a, int b)
{
	if (c1[a])
	{
		que(a + 1, b);
	}
	else
	{
	    if (b == lc)
		    return;
	    if (c[b] == m)
	    {
		    que(a + 1, b + 1);
	    }
	    else
	    {
		    cout << a << " " << b << endl;
		    c1[a] = 1;
		    c1[b] = 1;
			while (c1[a] == 1)
			{
				a--;
			}
		    que(a, b + 1);
		}
	}
}


int main()
{
	cin >> c;
	m = c[0];
	lc = strlen(c);
	que(0, 1);
	return 0;
}
