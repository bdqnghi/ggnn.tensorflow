int i;
char x[101];
char y[101];
void f() {
	int num = 0;
	int k[101] = {0};
	memset(y, ' ', 101);
	int len = strlen(x);
	for (i = 0; i < len; i++) {
		if (x[i] == '(') {
			y[i] = '$';
			num = num + 1;//num?????????
			k[num] = i;//?????????

		}
		if (x[i] == ')') {
			if (num > 0) {
				y[k[num]] = ' ';
				num = num - 1;//?????????
			} else
				y[i] = '?';
		}
	}
	for (i = 0; i < len; i++) {
		cout << y[i];//??
	}
	cout << endl;
}

int main() {
	while(cin >> x){
		cout << x << endl;
		f();
	}
	return 0;
}
