int  main(){    
	int n;    
	cin >> n;
    char s1[5];
	cin.getline(s1,5);
	while (n)
	{
		int tem=1;
		char s[90];
		cin.getline(s,90);
		int i;
        for (i=0;i<strlen(s);i++)
		{
			if (i==0)
				if (s[0]=='_'||(s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z'))
					tem=1;
				else 
				{
					tem=0;
					break;
				}
			else
				if (s[i]>='a'&&s[i]<='z'||(s[i]>='A'&&s[i]<='Z')||s[i]>='0'&&s[i]<='9'||s[i]=='_')
					tem=1;
				else 
				{
					tem=0;
					break;
				}
		}
	cout << tem<< endl;   
	n--;
	}
		return 0;
}
