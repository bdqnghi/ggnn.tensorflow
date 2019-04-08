int main ()
{
	int sy, sm, sd, ey, em, ed, res = 0;
    cin >> sy >> sm >> sd;
	cin >> ey >> em >> ed;
	int mon[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (sy != ey || sm != em || sd !=ed)
	{
		if ((sy % 4 == 0 && sy % 100 != 0) || (sy % 400 == 0)) mon[2] = 29;
		else mon[2] = 28;
		sd++;
		if (sd > mon[sm])
		{	sd = 1; sm++;}
		if (sm > 12)
		{sm = 1; sy ++;}
		res++;
	}
	cout << res << endl;
	return 0;
}