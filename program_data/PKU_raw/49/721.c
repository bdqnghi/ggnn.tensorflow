//****************************************************
//*  ? ? ?: homework.cpp                          *
//*  ?    ?: ???                                *
//*  ????: 2012?11?10?                        *
//*  ????: ????                              *
//****************************************************



int main()
{
	char st[502] = {0};  
	int len, longs, j, k, f; //len????  
	cin >> st;
	len = strlen (st);
	for (k = len + 1; k >= 0; k--) st[k + 1] = st[k]; //????? 
	st[0] = '\0';
	for (longs = 2; longs <= len; longs++) //????????? 
	{
		for (j = 1; j <= len - longs + 1; j++) // ?????? 
		{
			f = 1;
			for (k = j; k <= j + longs - 1; k++) //????????? 
			{
				if (st[k] != st[j + longs - 1 - k + j]) 
				{
					f = 0;
					break;
				}
			}
			if (f) //?????? 
			{
				for (k = j; k <= j + longs - 1; k++) cout << st[k];
				cout << endl;
			}
		}
	}
	
	return 0;
}
