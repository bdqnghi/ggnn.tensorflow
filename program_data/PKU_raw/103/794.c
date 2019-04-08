int main()
{
	int i, j, count = 1;
	char a[1005], x;
	cin >> a;
	for(i = 0; i < strlen(a); i++)
	{
		if(a[i] > 96 && a[i] < 123)
			a[i] -= 32;
	}
	for(i = 0; i < strlen(a);)
	{
		x = a[i];
		for(j = i + 1; j < strlen(a); j++)
	    {
		    if(x != a[j])
			{
				cout << "(" << a[i] << "," << j - i << ")";
				break;
			}
    	}
		if(j == strlen(a))
		{
			cout << "(" << a[i] << "," << j - i << ")";
		}
		i = j;
	}

	return 0;   
}