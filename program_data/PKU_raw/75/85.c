int main()
{
	int time[1000] = {0}, intime[1000] = {0}, outtime[1000] = {0},
		i = 0, j = 0, peoplesum = 0, maxsum = 0;
	char mark;
	do{
		cin >> intime[i];
		mark = cin.get();
		peoplesum++;
		i++;
	}while(mark != '\n');
	i = 0;
	do{
		cin >> outtime[i];
		mark = cin.get();
		i++;
	}while(mark != '\n');
	for (i = 0; i < peoplesum; i++)
		for (j = intime[i]; j < outtime[i]; j++)
			time[j]++;
	for (j = 0; j < 1000; j++)
		if (time[j] > maxsum)
			maxsum = time[j];
	cout << peoplesum << " " << maxsum;
	return 0;
}