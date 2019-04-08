int main ()
{
	int n;
	char str[10000];
	char *b, *c;
	int flag = 0;
	c = str;
	b = str;
	
	cin >> n;
	cin.get();
	cin.getline(str, 10000);
	int len = strlen(str);
	if (len == 80) cout << str;
	else
	{
	for (; b - str < len + 1; b++)
    {
		if ((b - c + 1) % 80 == 0)
		{
			if(*b == ' ' )
			{	
				for (b = c; b < c + 79; b++)
				{cout << *b;}
			    cout << endl;
				b++;
				c = b;
			}
			else
			{
				if(*(b + 1) == ' ')
			    {
		    		for (b = c; b < c + 80; b++)
		    		{cout << *b;}
					cout << endl;
		    		b++;
		    		c = b;
	    		}
				else
				{
					int num = 0;
				    if (*(b + 1) != ' ')
					{
						while (*b != ' ')
						{
							b--; 
							num++;// ???????????????????
						}
					    for (b = c; b < c + 79 - num; b++)
		    		     {cout << *b;}
					     cout << endl;
		    		     b++;
		    		     c = b;
					}
				}
		    }
		   
    	} 
		if (*b == '\0')
		{
		    b = c;
			while (*b != '\0')
			{
				cout << *b;
				b++;
			}
			cout << endl;
		}
	}
	}
    return 0;       
}


