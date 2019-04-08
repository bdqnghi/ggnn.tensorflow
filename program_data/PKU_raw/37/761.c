int main()  
{
	char a[10000], only[1000]; 
	int i, j, count[26] = {0}, t, len, temp; 
	cin >> t;
	cin.get();
	for (i = 1; i <= t; i++)
	{
		for (j = 0; j < 26; j++)
			count[j] = 0;
		cin.getline(a,10000);
		len = strlen(a);		
		for (j = 0; j < len; j++)
		{
			temp = a[j] - 'a';        
		    count[temp]++;
		}		
		for (j = 0; j < len; j++)
		{
			temp = a[j] - 'a';
			if (count[temp] == 1)
			{
				only[i] = a[j];
				break;
			}
		}
		if (j == len)
			only[i] = 'A'; 
	}
	for (i = 1; i <= t; i++)
	{
		if (only[i] == 'A')
			cout << "no" <<endl;
		else
			cout << only[i] <<endl;
	}
	return 0; 
}