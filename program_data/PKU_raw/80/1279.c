

int run_check(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	return 0;
}

int days_in_months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    int sy, sm, sd, ey, em, ed, ans = 0;

	cin >> sy >> sm >> sd >> ey >> em >> ed;

	for (int i = sy + 1; i < ey; i++)
		ans += run_check(i) + 365;

	if (sy != ey) {
		for (int i = sm + 1; i <= 12; i++) {
			ans += days_in_months[i];
			if (i == 2)
				ans += run_check(sy);
		}
		for (int i = 1; i < em; i++) {
			ans += days_in_months[i];
			if (i == 2)
				ans += run_check(ey);
		}
	}
	else {
		for (int i = sm + 1; i < em; i++) {
			ans += days_in_months[i];
			if (i == 2)
				ans += run_check(sy);
		}
	}

	if (sy != ey || sm != em) {
		for (int i = sd; i <= days_in_months[sm]; i++)
			ans++;
		if (sm == 2)
			ans += run_check(sy);
		for (int i = 1; i < ed; i++)
			ans++;
	}
	else {
		for (int i = sd; i < ed; i++)
			ans++;
	}
	cout << ans;
    return 0;
}
