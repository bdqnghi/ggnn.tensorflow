char a[100], p, q;

void solve()
{
	int i=0, b, g;
	while(a[i] != '\0')
	{
		if(a[i] == p)
			b = i;
		else if (a[i] == q)
		{
			g = i; 
			a[b] = '0';
			a[g] = '0';
			cout << b << ' ' << g << endl;
			solve();
			break;
		}
		i++;
	}
	return;
}
		
	
int main()
{
	
	cin.get(a,100);
	p = a[0];
	int i=0;
	while(1)
	{
		if(a[i] != p)
		{
			q = a[i];
			break;
		}
		i++;
	}
	solve();

	return 0;
}
		
