
static int TIME_LIMIT = 1000;

int parseInput(char * input, int * record);

int main() {
	char input[100000];
	int enter[TIME_LIMIT];
	int leave[TIME_LIMIT];
	for (int i=0; i<TIME_LIMIT; i++) {
		enter[i]=leave[i]=0;
	}
	cin.getline(input, 100000);
	int all = parseInput(input, enter);
	cin.getline(input, 100000);
	parseInput(input, leave);
	
	int max = 0;
	for (int i=0; i<TIME_LIMIT; i++) {
		if (enter[i]-leave[i] > max) {
			max = enter[i]-leave[i];
		}
	}
	cout << all << ' ' << max << endl;
	return 0;
}

int parseInput(char * input, int * record) {
	int idx = 0;
	char number[5];
	int number_idx = 0;
	int count = 0;
	while (idx < strlen(input)) {
		if (input[idx]!=',') {
			number[number_idx++] = input[idx];
		}
		else {
			number[number_idx] = '\0';
			number_idx = 0;
			int inum = atoi(number);
			for (int i=inum; i<TIME_LIMIT; i++) {
				record[i] ++;
			}
			count++;
		}
		idx++;
	}
	
	//???????
	number[number_idx] = '\0';
	int inum = atoi(number);
	for (int i=inum; i<TIME_LIMIT; i++) {
		record[i] ++;
	}
	count++;
	return count;
}
