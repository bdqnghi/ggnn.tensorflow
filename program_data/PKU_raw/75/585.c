//********************
//***
//**??? 1300012728* 
//**2013.10.30********
//********************
int main()
{
	int time[1000];                      // ???????
	for (int i = 0; i < 1000; i++)
	time[i] = 0;
	int begin[1001], end[1001];               // ?????????????? 
	int n = 1;                                // ?????n 
	char point;                               // ??point??“?” 
	while (cin >> begin[n])                   // ????begin?? 
	{
		cin.get(point);
		if (point != ',')                     // ????“?”?????????? 
			break;
		n++;                                  // ???+1 
	}
	for (int i = 1; i <= n; i++)
	{
			cin >> end[i];
			cin.get();
	}
	
	for (int i = 1; i <= n; i++)
	{
		 for (int j = begin[i]; j < end[i]; j++)
		 	time[j] += 1;
	}
	int max = 0;
	for (int i = 1; i < 1000; i++)
	{
		if(max <= time[i])
		{
			max = time[i];
		}
	}
	cout << n <<" "<< max;
	return 0;
}