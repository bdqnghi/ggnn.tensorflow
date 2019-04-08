//***************************
//*???n-gram????    **
//*????? 1300012921   **
//*???2013.12.18        **
//*************************** 

char ch[520];
int n;

int main()
{
	char zichuan[520][6] = {0};
	int zichuanshu[520] = {0};
	char *p = NULL, *q = NULL;
	int flag1, flag2, dijige = 0;
	cin >> n;
	cin.get();
	cin.getline(ch, 520);
	for(q = ch; *(q + n - 1) != '\0'; q++)
	{
		flag2 = 1; //??????????????? 
		for(p = q; *(p + n - 1) != '\0'; p++)
		{
			if(*p == *q)
			{
				flag1 = 1;
				for(int i = 2; i <= n; i++)
				{
					if(*(p + i - 1) != *(q + i - 1))
					{
						flag1 = 0;
						break;
					}
				} // ???p????????????????? 
				if(flag1)
				{
					if(flag2)
					{
						for(int i = 0; i < n; i++)
							*(zichuan[dijige] + i) = *(p + i);	
						flag2 = 0;
					}
					
					zichuanshu[dijige]++;
				} 
			}
		}
		dijige++;
	}
	int max = 1;
	for(int i = 0; i <= 519; i++)
	{
		if(zichuanshu[i] > max)
			max = zichuanshu[i];
	}
	
	if(max > 1)
	{
		cout << max << endl;
		for(int i = 0; i<= 519; i++)
		{
			if(zichuanshu[i] == max)
				{
				for(int j = 0; j < n; j++)
					cout << *(zichuan[i] + j);
				cout << endl;
				}
		}
	}
	else
		cout << "NO" << endl;
	return 0;
}