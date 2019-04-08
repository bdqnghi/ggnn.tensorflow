//*****************************************
//* ???????? **
//* ?????? 1300012741 **
//* ???2013.10.30 **
//*****************************************


int main()
{
	int time_arrive[1000]; // ??????
	int time_leave[1000]; // ??????
	int people_present[1000] = { 0 }, people_max = 0; // ???????????????
	int i, j, num = 0; // ????????????
	char mess = 0; // ??????

	while ( mess != '\n' )
	{
		cin >> time_arrive[num];
		num++;
		mess = cin.get();
	}

	for ( i = 0; i < num; i++ )
	{
		cin >> time_leave[i];
		for ( j = time_arrive[i]; j < time_leave[i]; j++ )
			people_present[j]++;
		mess = cin.get();
	}

	for ( i = 0; i < 1000; i++ )
		if ( people_max < people_present[i] )
			people_max = people_present[i];

	cout << num << " " << people_max;

	return 0;
}