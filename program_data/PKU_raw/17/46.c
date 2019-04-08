int main()
{
	while(1)
	{
		char	s[101], zhui = '#';
		int	count[101] = {0};//count = 1????count = 2??? 
		int	i = 0, j = 0, sl = 0, p = 0, q = 0;
		for (i = 0; i < 101; i ++)
		{s[i] = '#';}//??? 
	
		//??
		cin.getline(s, 101); 
		sl = strlen(s);
		if(s[0] == '\0'){break;}//??????????? 	
		//???
		for (i = 0; i < sl; i ++)
		{
			if(s[i] == '(')	
			{
				count[i] = 1;
			}
			else if(s[i] == ')')
			{
				count[i] = 2;
			}
			else{continue;}
		}
		 
		//??????????0 
		for (i = sl - 1; i >= 0; i --)
		{
			if(count[i] == 1)
			{
				for (j = i + 1; j < sl; j ++)
				{
					if(count[j] == 2)
					{
						count[i] = 0;
						count[j] = 0;
						break;
					} 
				}
			}
		}
	
		//???0?????????;
		int	dingzuo[101] = {0};
		int	dingyou[101] = {0};
		int	flag = 0;//???????
		int	count0 = 0;
		for (i = 0; i < sl; i ++)
		{
			if(count[i] == 1)
			{
				dingzuo[i] = 1;
				flag = 1;
				count0 ++;
			}
			else if(count[i] == 2)
			{
				dingyou[i] = 1;
				flag = 1;
				count0 ++;
			}
			else
			{continue;}
		} 
	
		//?? 
		int	k = count0;
		for (i = 0; i < sl; i ++)
		{cout << s[i];}//??????? 
		if(flag == 1)
		{
			cout << endl;
			for (i = 0; i < sl; i ++)
			{
				if(dingzuo[i] == 1)
				{
					cout << "$";
					count0 --;
				}
				else if(dingyou[i] == 1)
				{
					cout << "?";
					count0 --;
				}
				else
				{
					if((count0 > 0) && (count0 < k))
					{cout << " ";}
				}
			}
			cout << endl;
		}
		else
		{cout << endl;}
	}

return 0;
}
