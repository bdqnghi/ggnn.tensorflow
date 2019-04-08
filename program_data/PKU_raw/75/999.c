int main()
{
	int x[1000 + 10] = {0}, y[1000 + 10] = {0}, presence[1000 + 10] = {0};
	int digit, i, j, k, nperson = 0, finaltime = 0;
	char c;
	cin >> x[nperson ++];
	while ((c = cin.get()) != '\n')
	{
		if (c == ',')
		{
			cin >> digit;
			x[nperson] = digit;
			nperson ++;
		}
	}
	nperson = 0;
	cin >> y[nperson ++];
	while ((c = cin.get()) != '\n')
	{
		if (c == ',')
		{
			cin >> digit;
			y[nperson] = digit;
			nperson ++;
			finaltime = finaltime > digit ? finaltime : digit;
		}
	}
	//cout << nperson;
	//for (i = 0; i < nperson; i ++)
	//	cout << x[i] << " ";
	//cout << endl;
	//for (i = 0; i < nperson; i ++)
	//	cout << y[i] << " ";
	//cout << endl;

	for (i = 0; i < nperson; i ++)
	{
		for (j = x[i]; j <= y[i] - 1; j ++)
			presence[j] ++;
	}
	int maxperson = 0;
	for (i = 0; i < finaltime; i ++)
	{
		//cout << presence[i] << " ";
		maxperson = maxperson > presence[i] ? maxperson : presence[i];
	}
	//cout << endl;
	cout << nperson << " " << maxperson << endl;
	return 0;
}