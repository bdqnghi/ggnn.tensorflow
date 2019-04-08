int main()
{
	char a[200];
	while(cin.getline(a, 200))
	{
		int n = strlen(a);
		int k;
		cout<<a<<endl;
		for(int i = 0; i < n; i++)
		{
			if(a[i] == '?')
				a[i]=' ';
			if(a[i] == '$')
				a[i]=' ';
			if(a[i] == ')')
			{
				for( k = i-1; k>=0;k--)
				{
					if(a[k] == '(')
					{
						a[i] = ' ';
						a[k] = ' ';
						break;
					}
				}
				if(k < 0)
					a[i] = '?';
			}
		}
		for(int i = 0; i < n; i++)
		{
			if(a[i] == '(')
				a[i] = '$';
			else
				if(a[i] != '?')
					a[i] = ' ';
		
		}
		cout<<a<<endl;
	
	}
    return 0;
}
