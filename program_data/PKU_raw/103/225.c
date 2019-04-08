int main()
{
	char a[1000];
	char temp;
	int i, l, count;
	cin.getline(a, 1000);
	l = strlen(a);
	for(i = 0; i <= l - 1; i++)
	{
		if(a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}
	a[l] = '0';
	temp = a[0];
	count = 1;
	if(l > 1)
	{
    	for(i = 1; i <= l; i++)
		{
	    	if(a[i] == temp)
			{
		    	count++;
			}
	    	if(a[i] != temp)
			{
		    	cout << "(" << temp << "," << count << ")";
		    	temp = a[i];
		    	count = 1;
			}
		}
	}
	if(l == 1)
	{
		cout << "(" << a[0] << "," << 1 << ")";
	}
	cin.get();
	return 0;
}