int main() {
	int startYear, startMonth, startDay;
	int endYear, endMonth, endDay;
	int Day[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int day = 0;
	cin >> startYear >> startMonth >> startDay;
	cin >> endYear >> endMonth >> endDay;
	for (int i = startYear; i < endYear; i++) {
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
			day = day + 366;
		else
			day = day + 365;
	}
	if ((endYear % 4 == 0 && endYear % 100 != 0) || endYear % 400 == 0)
		Day[2] = 29;
	for (int i = 1; i < endMonth; i++) {
		day = day + Day[i];
	}
	day = day + endDay;
	if ((startYear % 4 == 0 && startYear % 100 != 0) || startYear % 400 == 0)
		Day[2] = 29;
	else
		Day[2] = 28;
	for (int i = 1; i < startMonth; i++) {
		day = day - Day[i];
	}
	day = day - startDay;
	cout << day;
	return 0;
}
