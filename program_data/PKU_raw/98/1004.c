int main() {
	int i, k, n, sum = 0;
	cin >> n;
	getchar();//?????????
	char text[1000][45];
	for (i = 0; i < n - 1; i++)
		for (k = 0; k < 40; k++) {
			*(*(text+i)+k) = getchar();
			if (*(*(text+i)+k) == ' ') {
				*(*(text+i)+k+1) = '\0';
				break;//???n-1???
			}
		}
	cin.getline(*(text+n-1),200);//????????????????
	for (i = 0; i < n; i++) {
		sum = sum + strlen(*(text+i));//?????????80
		if (sum - 1 > 80) {
			cout << endl;
			sum = strlen(*(text+i));
		}
		k = 0;
		while (true) {
			if(i != n - 1)
			if (*(*(text+i)+k) != ' ') {
				cout << *(*(text+i)+k);
				k = k + 1;//?????
			} else {
				if (sum + strlen(*(text+i + 1)) - 1 <= 80)
					cout << " ";
				break;//???????????????
			}
			if (i == (n - 1))
				if (*(*(text+i)+k)!='\0') {
					cout << *(*(text+i)+k);
					k = k + 1;
				} else
					break;//??????????????????
		}
	}
	return 0;
}
