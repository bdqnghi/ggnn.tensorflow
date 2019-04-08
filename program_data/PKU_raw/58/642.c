int main()
{
	int	i, n;
	cin >> n;
	cin.get();
	for (i = 0; i < n; i ++)
	{
		char sen[81];
		cin.getline(sen,81);
		int	sl = 0;	
		sl = strlen(sen);

		int	k = 0;
		for (k = 0; k < sl; k ++)
		{
			if(k == 0)
			{
				if(  (('a' <= sen[k]) && (sen[k] <= 'z')) || (('A' <= sen[k]) && (sen[k] <= 'Z')) || (sen[k] == '_')  )
				{continue;}
				else
				{break;}	
			}		
			else
			{
				if((('a' <= sen[k]) && (sen[k] <= 'z')) || (('A' <= sen[k]) && (sen[k] <= 'Z')) || (sen[k] == '_') || (('0' <= sen[k]) && (sen[k] <= '9')))
				{continue;}
				else
				{break;}			
			}
		}

		if(k == sl)
		{
			cout << 1 << endl;
		}
		else
		{
			cout << 0 << endl;
		}	
	}

return 0;
}