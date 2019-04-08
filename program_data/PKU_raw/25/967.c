
int main()

{
	int i, n, x, temp=0;
	int a[90];
	memset(a, -1, sizeof(a));
	a[89] = 2;
	cin >> n;
	if(n == 0)
		cout << "1";
	else
	{
		while(--n)
		{
			temp = 0;
			for(i = 89; a[i] != -1; i--)
			{
    			x = a[i] * 2 + temp;
				if(x < 10)
				{
		    		a[i] = x;
				    temp = 0;
			    }
				else
				{
					a[i] = x % 10;
					temp = x / 10;
					if(a[i - 1] == -1)
			    	{
				    	a[i-1] += temp + 1;
				    	break;
				    }
				}
			}
		}
		for(i = 0; i < 90; i++)
		{
			if(a[i] != -1)
		        cout << a[i];
		}
	}

	return 0;
}