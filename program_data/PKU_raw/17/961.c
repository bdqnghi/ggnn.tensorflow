

int main()
{
	char c[100];
	int l;
	
	while(cin >> c)
	{
		int a[100] = {0};		
		int left = 0;
		
		l = strlen(c);
		
		for(int i = 0; i < l; i ++)
		{
			
			if(left == 0 && c[i] == ')')
			a[i] = 1;
						
			if(c[i] == '(')
			left ++;
			
			if(c[i] == ')' && left > 0)
			{		
				left --;
				
				for(int j = i; j >= 0; j --)
				{
					if((c[j] == '(' ) && (a[j] != 2))
					{
						a[j] = 2;
						break;
					}
				}
			}
		}
		
		int count = 0;
		
		if(left != 0)
		for(int i = l; count < left; i --)
		{
			if(c[i] == '(' && a[i] != 2)
			{
				a[i] = -1;
				count ++;
			}
		}
		
		for(int i = 0; i < l; i ++)
		cout << c[i];
		
		cout << endl;
	
		for(int i = 0; i < l; i ++)
		{
			if(a[i] == 0 || a[i] == 2)
			cout << " ";
			else if(a[i] == 1)
			cout << '?';
			else if(a[i] == -1)
			cout << '$';
		}
		
		cout << endl;
		
	}
	
	return 0;
}