
int main ()
{
	int w, yue, sum = 0;
	cin >> w;
	for (yue = 1; yue <= 12; yue++)
	{
		if (yue == 2)
			sum = sum + 31;
		if (yue == 3)
			sum = sum + 28;
		if (yue == 5 || yue == 7) 
			sum = sum + 30;
		if (yue == 8)
			sum = sum + 31;
		if (yue == 10 || yue == 12)
			sum = sum + 30;
		if (yue == 4 || yue == 6 || yue == 9 || yue == 11)
			sum = sum + 31;
		if (((sum + 13) % 7 + w) % 7 == 6)
			cout << yue << endl;
	}
	return 0;
}