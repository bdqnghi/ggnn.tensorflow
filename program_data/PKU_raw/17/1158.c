int main()
{
	char line[101], mark[101];
	int locate[101], left = 0, right = 0, count = -1, len, i;
	while(cin.getline(line,101))
	{
		count = -1;
		left = 0;
		right = 0;
		len = strlen(line);
		memset(mark, ' ', sizeof(mark));
		memset(locate, 0, sizeof(locate));
		for(i = 0 ; line[i] != '\0' ; i++)
		{
			
			if(line[i] == '(')
			{
				left++;
				locate[++count] = i;
			}
			if(line[i] == ')')
			{
				if(left <= right)
				{
					mark[i] = '?';
				}
				else
				{
					right++;
					count--;
				}
			}
		}
		if(count >= 0)
		{
			for(i = 0 ; i <= count ; i++)
			{
				mark[locate[i]] = '$';
			}
		}
			mark[len] = '\0';
			cout << line << endl;
			cout << mark << endl;
		
		
	}
		return 0;
	}

