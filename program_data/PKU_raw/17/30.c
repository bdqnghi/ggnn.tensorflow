//3704:??????
//2010?11?13?
//1000012753 ???
int main()
{
	char ch[200];
	int a[200];
	int n, l, i, j, m;
	while(cin.getline(ch,150))
	{
		l = strlen(ch);
		for(i = 0; i < l; i++)
			if(ch[i] == '(')
				a[i] = -1;
			else if(ch[i] == ')')
			{
				for(j = i - 1; j >=0; j--)
					if(a[j] == -1)
						break;
				if(j != -1)
				{
					a[i] = 0;
					a[j] = 0;
				}
				else
					a[i] = 1;
			}
			else
				a[i] = 0;
		n = 0;
		for(i = 0; i < l; i++)
			if(a[i] != 0)
				n++;
		m = n ;
		i = 0;
		cout << ch << endl;
		while(n > 0)
		{
			if(a[i] == -1)
				cout << "$";
			else if(a[i] == 1)
				cout << "?";
			else if(m != n)
				cout << " ";
			if(a[i] != 0)
				n--;
			i++;
		}
		cout << endl;
	}
	return 0;
}   