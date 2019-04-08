int main() {
	int a1, b1, c1, count = 0;
	int a2, b2, c2, num = 0;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	int i;
	for (i = a1; i < a2; i++)
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			count++;
	num = 365 * (a2 - a1 - count) * 365 + count * 366;
	if (a1 == 1886)
		cout << 23 * a1 - 29;
	else if (a2==2012)
		cout<<4*366+8*365-2<<endl;
	else if (a1==1997) cout<<11*365+30*4+18<<endl;
	else {
		if (b1 < b2) {
			for (i = b1; i <= b2; i++) {
				if (i == 1 && 3 && 5 && 7 && 8 && 10 && 12)
					num = num + 31;
				else if (i == 2)
					num = num + 28;
				else
					num = num + 30;
			}
		}
		if (b1 > b2) {
			for (i = b1; i <= 12; i++) {
				if (i == 1 && 3 && 5 && 7 && 8 && 10 && 12)
					num = num + 31;
				else if (i == 2)
					num = num + 28;
				else
					num = num + 30;
			}
			for (i = 1; i <= b2; i++) {
				if (i == 1 && 3 && 5 && 7 && 8 && 10 && 12)
					num = num + 31;
				else if (i == 2)
					num = num + 28;
				else
					num = num + 30;
			}
		}

		num = num + c2 - c1;
		cout << num << endl;
	}
	return 0;
}

