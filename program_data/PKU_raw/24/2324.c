
int main()
{
	int num, longest = 0, shortest = 15;
	char a[201], *p = a, *longplace, *shortplace;
	cin.getline(a,201);
	while (*p != '\0')
	{  
		num = 0;
		while (*p != ' ' && *p != ',' && *p != '\0')
		{
			num++;
			p++;
		}
		if (num > longest)
		{
			longest = num;
			longplace = p - num;
		}
		if (num < shortest)
		{
			shortest = num;
			shortplace = p - num;
		}
		if (*p != '\0')
		{
			p++;
		}
		if (*p == ' ')
		{
			p++;
		}
	}
	for (p = longplace; p <= longplace + longest - 1; p++)
	{
		cout << *p;
	}
	cout << endl;
	for (p = shortplace; p <= shortplace + shortest - 1; p++)
	{
		cout << *p;
	}
	cout << endl;
	
	return 0;
}
		
		
		
		
		
		
		
		
	
