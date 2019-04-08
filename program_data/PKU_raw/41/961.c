

int main()
{
	int a, b, c, d, e;
	for (a = 1; a <= 5; a++) {
		
	for (b = 1; b <= 5; b++) {
		if (b == a)
			continue;
	for (c = 1; c <= 5; c++) {
		if (c == b || c == a)
			continue;
	for (d = 1; d <= 5; d++) {
		if (d == c || d == c || d == b || d == a)
			continue;
	for (e = 1; e <= 5; e++) {
		if (e == d || e == c || e == c || e == b || e == a)
			continue;
		if (e == 2 || e == 3)
			continue;
		if (e == 1 && (a == 1 || a == 2) || a != 1 && a != 2 && e != 1)
			if (b == 2 || b != 1 && b != 2)
			if (a == 5 && (c == 1 || c == 2) || c != 1 && c != 2 && a !=5)
				if (c != 1 && (d == 1 || d == 2) || d != 1 && d != 2 && c == 1)
					if (d == 1 && (e == 1 || e == 2) || e != 1 && e != 2 && d != 1)
						printf("%d %d %d %d %d", a, b, c, d, e);
	}
	}
	}
	}
	}
}