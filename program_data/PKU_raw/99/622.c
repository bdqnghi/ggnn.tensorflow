
int main() {
	int n;
	cin >> n;
	int patient[100];  /* to store the age of each patient */
	int age[4] = {0, 0, 0, 0}; /* to count the number of people in each group */
	for(int i = 0; i < n; i++) {
		cin >> patient[i];
		if(patient[i] <= 18) age[0]++;
		if(patient[i] >= 19 && patient[i] <=35) age[1]++;
		if(patient[i] >= 36 && patient[i] <= 60) age[2]++;
		if(patient[i] >60) age[3]++;
	}
	double percent[4]; /* to calculate the percentage of each group */
	for(int i = 0; i < 4; i++) {
		percent[i] = (double)(age[i]) / n * 100;
	}
	cout << "1-18: ";
	printf("%.2lf",percent[0]);
	cout << '%' << endl;
	cout << "19-35: ";
	printf("%.2lf",percent[1]);
	cout << '%' << endl;
	cout << "36-60: ";
	printf("%.2lf",percent[2]);
	cout << '%' << endl;
	cout << "60??: ";
	printf("%.2lf",percent[3]);
	cout << '%' << endl;

	return 0;
}