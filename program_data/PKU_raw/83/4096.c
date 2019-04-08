
int main() {
	int n;
	cin >> n;
	int xuefen[10] = {0};  // input part
	for(int i = 0; i < n; i++)
		cin >> xuefen[i];
	int score[10] = {0};
	double jidian[10] = {0};
	for(int i = 0; i < n; i++) {
		cin >> score[i];
		if(score[i] >= 90 && score[i] <= 100) jidian[i] = 4.0;     // calculate the jidian of this course
		if(score[i] >= 85 && score[i] <= 89) jidian[i] = 3.7;
		if(score[i] >= 82 && score[i] <= 84) jidian[i] = 3.3;
		if(score[i] >= 78 && score[i] <= 81) jidian[i] = 3.0;
		if(score[i] >= 75 && score[i] <= 77) jidian[i] = 2.7;
		if(score[i] >= 72 && score[i] <= 74) jidian[i] = 2.3;
		if(score[i] >= 68 && score[i] <= 71) jidian[i] = 2.0;
		if(score[i] >= 64 && score[i] <= 67) jidian[i] = 1.5;
		if(score[i] >= 60 && score[i] <= 63) jidian[i] = 1.0;
		if(score[i] <= 59) jidian[i] = 0;
	}
	double sum1 = 0, sum2 = 0;
	for(int i = 0; i < n; i++) {
		sum1 += xuefen[i] * jidian[i]; // ????????
		sum2 += xuefen[i];        // ???????? 
	}
	double GPA = sum1 / sum2;
	printf("%.2f",GPA);
	getchar();
	getchar();
	return 0;
}

