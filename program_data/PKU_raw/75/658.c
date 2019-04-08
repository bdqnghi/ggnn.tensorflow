//********************************
//*????????             **
//*?????? 1300012965      **
//*???2013.10.30             **
//********************************
int main ()
{
	int num, i, j, n, m, k, temp;
	int start[1000] = {0};
	int end[1000] = {0};
	int time[1000] = {0};
	char ch;
	cin >> start[0];
	ch = cin.get();//??????
	i = 0;
	while(ch == ',')//???????????
	{
		i++;
		cin >> start[i];
		ch = cin.get();
	}
	cin >> end[0];
	ch = cin.get();
	j = 0;
	while(ch == ',')
	{
		j++;
		cin >> end[j];
		ch = cin.get();
	}
	cout << i + 1 << " ";//?????
	for(n = 0; n <= i;n++)
		for(k = start[n]; k < end[n]; k++)
			time[k]++;//????????1
	for(m = 0; m <= 999; m++)
		if(time[m] > time[m+1])
		{
			temp = time[m];
			time[m] = time[m+1];
			time[m+1] = temp;//?????????????????
		}
	cout << time[999] << endl;//??????
	return 0;
}