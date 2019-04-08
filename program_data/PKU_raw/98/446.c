int main()
{
	char str[100000],*p = NULL;
	int n,count = 0;
	cin >> n;
	cin.get();
	cin.getline(str,10000);
	p = str;
    for(p = str; *p != '\0';p++)
	{
		count++;
		if(count == 81)
		{
		   if(*p != ' ')
			{
				while(*p != ' ')
					p--;
			}
            *p = '\n';
			count = 0;
		}
		
	}
	for(p = str; *p != '\0'; p++)
	{
	        cout << *p;
	}
	cout << endl;
		return 0;
}