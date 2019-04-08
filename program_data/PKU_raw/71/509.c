int day(int m)
{
	int d=0;
	switch (m) {
	case 12: d+=30;
	case 11: d+=31;
	case 10: d+=30;
	case 9: d+=31;
	case 8: d+=31;
	case 7: d+=30;
	case 6: d+=31;
	case 5: d+=30;
	case 4: d+=31;
	case 3: d+=28;
	case 2: d+=31;
	}
	return d;
}
int main ()
{
	int n, y, m1, m2, d1, d2;
	scanf("%d", &n);
	while(n--) {
		scanf("%d%d%d", &y, &m1, &m2);
		d1=day(m1);
		d2=day(m2);
		if (y%4==0&&y%100!=0||y%400==0) {
			if (m1>2) d1++;
			if (m2>2) d2++;
		}
		if ((d1-d2)%7==0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
		
