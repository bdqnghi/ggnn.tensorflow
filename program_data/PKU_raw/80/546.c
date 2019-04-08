int main()
{
	int M[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int y1, m1, d1, y2, m2, d2;
	int r1, r2;
	scanf("%d%d%d%d%d%d", &y1, &m1, &d1, &y2, &m2, &d2);
	r1 = 0;
	for(int year = 1; year < y1; year ++) {
		if((year % 4 == 0 && year % 100 != 0) || (year % 400) == 0) { r1 += 366; }
		else { r1 += 365; }
	}
	for(int month = 1; month < m1; month ++) {
		r1 += M[month];
	}
	r1 += d1 - 1;
	if((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400) == 0) {
		if(m1 > 2) { r1 ++; }
	}
	r2 = 0;
	for(int year = 1; year < y2; year ++) {
		if((year % 4 == 0 && year % 100 != 0) || (year % 400) == 0) { r2 += 366; }
		else { r2 += 365; }
	}
	for(int month = 1; month < m2; month ++) {
		r2 += M[month];
	}
	r2 += d2 - 1;
	if((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400) == 0) {
		if(m2 > 2) { r2 ++; }
	}
	printf("%d", r2 - r1);
	return 0;
}

// 1 1 1??0?