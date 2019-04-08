

int main()
{
	int n, i = 1, flag = 0;
	cin >> n;
	cin.get();
	char sen[100];
	while ( cin.getline(sen, 100) )
	{
		flag = 0;
		i = 1;
		if ( sen[0] !='_' && (sen[0] < 'a' || sen[0] >'z') && ( sen[0] <'A' || sen[0] >'Z'))
		{
			cout << 0 << endl;
			flag = 1;
			continue;
		}
		else
		{
			while( sen[i] !='\0') 
			{
				if ( sen[i] !='_' && (sen[i] < 'a' || sen[i] >'z') && ( sen[i] <'A' || sen[i] >'Z') && ( sen[i] <'0' || sen[i] >'9'))
				{
					cout << 0 << endl;
					flag = 1;
					break;
				}
				i ++;
			}
			if ( flag == 0 )
				cout << 1 << endl;
		}
	}
	return 0;
}



						


			


