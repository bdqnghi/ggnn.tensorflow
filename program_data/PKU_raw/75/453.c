
int main()
{
    int arr[1020], lea[1020];
	int num = 0;
	int i, j, k;
	for(i = 1; ;i++)
	{
		cin >> arr[i];
		num ++;
		k =cin.get() ;
		if(k == 10)
			break;
	}
	for(i = 1; ;i++)
	{
		cin >> lea[i];
		if(cin.get() == 10)
			break;
	}

    int people[1020];
	for(i = 1; i < 1000; i++)
		people[i] = 0;
	for(i = 1; i <= num; i++)
	{
		for(j = arr[i]; j < lea[i]; j++)
			people[j] ++;
	}
	int Max_people = 0;
	for(i = 1; i < 1000; i++)
	{
		if(people[i] > Max_people)
			Max_people = people[i];
	}
	cout << num << ' '<< Max_people << endl;


	return 0;
}

