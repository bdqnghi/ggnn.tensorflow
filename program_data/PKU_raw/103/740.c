int main()
{
    char a[2000];
	cin >> a;
	int i = 1, count = 1;
	while(a[i] != '\0')
	{
		if(a[i] == a[i-1] || a[i] == a[i-1] + 32 || a[i] == a[i-1] - 32)
			count++;
		else
		{
			if(a[i-1] <= 'Z')
			{
				cout<<'('<<a[i-1]<<','<<count<<')';
	            count = 1;
		    }
			else
			{
			    cout<<'('<<(char)(a[i-1] - 32)<<','<<count<<')';
	            count = 1;
			}

		}
		i++;
	}
	if(a[i-1] <= 'Z')
		cout<<'('<<a[i-1]<<','<<count<<')';
	else
 	    cout<<'('<<(char)(a[i-1] - 32)<<','<<count<<')';
	return 0;
}