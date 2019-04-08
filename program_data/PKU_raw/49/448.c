char str[500];

int huiwen( int i , int length )
		{   
		    int j, p = i + length -1;
			for (j = i; j <= (2*i + length)/2  ; j++ )
			{
				if (str[j] != str[p])
					return 0;
				    p--;
			}
			
			return 1;
		}

int main()
	{   
		int length, i = 0, j;
		cin >> str;
		for (length = 2; str[length - 1]!='\0';length++)
			for (i = 0;str[i+length-1] != '\0'; i++)
			{
				if (huiwen(i,length))
					for (j = i; j < i+length; j++)
					{
						if( j == i + length -1)
							cout << str[j] << endl;
						else
							cout << str[j];
					}
			}
	return 0;
	}