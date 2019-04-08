/*        ????
??:???        2010.11.03    */
int main()
{
	int a[25], row[25], line[25];//row????line???
	int i, s, t, j;
	for(i = 0; i < 25; i++)
	{
		cin >> a[i];
		row[i] = i / 5 + 1;
		line[i] = i % 5 + 1;//?????
	}
	s = 0;//???????
	for(i = 0; i < 25; i++)
	{
		t = 0;//??a[i]?????
		for(j = 0; j < 25; j++)
		{
			if(row[j] == row[i])
				if(a[j] > a[i])
					t = 1;
			if(line[j] == line[i])
				if(a[j] < a[i])
					t = 1;
		}
		if(t == 0)
		{
			cout << row[i] << " " << line[i];
			cout << " " << a[i] << endl;
			s = 1;
		}
	}
	if(s == 0)
		cout << "not found" << endl;
	return 0;
}




	



