char a[1000];
int n, c1 = 0;
int match(int c)
{
	for(int i = c; i < n; i++)
	{
		if(a[i] != '(' && a[i] != ')' && a[i] != '$')
			a[i] = ' ';
		if(a[i] == '(')
		{
			c1 ++;
			if(match(i + 1) != 0)
			{
				a[i] = ' ';
				a[match(i + 1)] = ' ';
				c1 --;
			}
			else
				a[i] = '$';
		}
		if(a[i] == ')')
		{
			if(c1 == 0)
			{
				a[i] = '?';
				if(i < n)
				{
					match(i + 1);
					return 0;
				}
			}
			return i;
		}
	}
	return 0;
}
int main()                                  //??? 
{
	while(cin>>a)
	{
		c1 = 0;
		n = strlen(a);
		cout<<a<<endl;
		match(0);
		cout<<a<<endl<<endl;
	}
    return 0; 
}                                          //????? 
