int main() {
	char jiance[101], c;
	int i, zifu, kuo2[100];
	while (cin >> jiance) {//???????
		cout << jiance << endl;//????????
		zifu = -1;
		for (i = 0; jiance[i] != 0; i++) {
			c = jiance[i];
			jiance[i] = ' ';//???????“  ”
			if (c == '(') {//??????
				zifu++;
				kuo2[zifu] = i;
			} else if (c == ')') {//?????
				zifu--;
				if (zifu < -1) {
					jiance[i] = '?';//???????????
					zifu = -1;
				}
			}
		}
		if (zifu > -1)
			for (; zifu > -1; zifu--)
				jiance[kuo2[zifu]] = '$';//????????????
		cout << jiance << endl;
	}
	return 0;
}
