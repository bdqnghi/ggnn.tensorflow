


int main()
{
	int n;
	cin >> n;
	char a[200] = {0}, b[200] = {0} ;
	int c[200] = {0}, d[200] = {0};  
	
	a[0] =1 + '0';
	int i=0;

	char *p=a;
	while(i<n)
	{
		int j =0;
		
		while( j<strlen(a) )
		{
			c[j] = a[j] - '0';
			j++;
		}

		j=0;
		while (j<strlen(a))
		{
			c[j] = c[j]*2;
			j++;
		}
		
		j=0;
		while (j<strlen(a)+1)
		{
			c[j+1] += (c[j]/10);
			c[j] %= 10 ;
			
			j++;
		}

		j=199;
		while(c[j] == 0)
			j--;
		while ( j >= 0)
		{
			a[j] = c[j] + '0';
			j--;
		}

		i++;
	}
	
	i=0;
	for(  i=strlen(a)-1; i>=0; i--)
	{
		cout << a[i];
	}
	return 0;
}