/*************************
??5
?? - ?????
???
2013/10/30
**************************/
int main()
{
	int x[1001], y[10001], cont=0, i=1, j, t[1000] = {0}, m=0;
	char ch;
	do
	{
		cin >> x[i] ;
		cont ++;//??
		ch = cin.get();//?????
		i++;
	}
	while (ch == ',');//??????
	i = 1;
	do
	{
		cin >> y[i];
		ch= cin.get();
		i++;
	}
	while (ch == ',');
	for (i = 1; i <= cont; i++)
	{
		for (j=x[i]; j<y[i]; j++)
		{
			t[j]++;//??????????1
		}
	}
	for (j=0; j < 1000; j++)
	{
		if (t[j] > m)//????????
			m = t[j];
	}
	cout << cont <<" "<< m;
	return 0;
}
