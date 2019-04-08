

void Loop(char s[],int n)
{
	int i, p, q;
	for(i=1;i<n;i++)
	{
		if(s[i]!=s[0]&&s[i])
		{
			p = i;
			break;
		}
	}
	if(p==n-1)
	{
		cout << "0 " << n-1 << endl;
		return;
	}
	for(i=p;i>=0;i--)
		if(s[i]==s[0])
		{
			q = i;
			break;
		}
	cout << q << " " << p << endl;
	s[q] = s[p] = 0;
	Loop(s,n);
}
int main()
{
	int n, i;
	char s[MAXN];
	cin >> s;
	n = strlen(s);
	Loop(s,n);
	return 0;
}