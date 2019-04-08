int main()
{
	char a[101],  t[101];
	int  i, j, k, c, b[101] = {0}, n;
	for(;cin >> a;)
	{
		n = strlen(a);
		for(i = 0;i < n;i++)
		{
			b[i]=0;
			t[i]=' ';
		}
	for(i = 0;i <= n;i++)
	{
		
		if(a[i] == ')')
		{
			for(j = i - 1;j >= 0;j--)
				if(a[j] == '(' && b[j] == 0)
				{
					b[i] = 1;
					b[j] = 1;
					break;
				}
				if(j == -1)
				{	c++;
					t[i] = '?';
				}
		}
		if(a[i] == '\0')
			for(k = 0;k < i;k++)
			{
				if(a[k] == '(' && b[k] == 0)
				{
					c++;
					t[k] = '$';
				}
			}
	}
	cout<<a<<endl;
	if(c!=0)
	{
		i = 0;
		while(t[i] == ' ')
			i++;
		k = n - 1;
		while(t[k] == ' ')
			k--;
		for(j = i;j <= k;j++)
		cout << t[j];
	}
	cout<<endl;
	}
	return 0;
}


					


