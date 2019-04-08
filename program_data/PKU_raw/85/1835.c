int main() {
	int n;
	cin >> n;
	while (n--) {
		char str[32];
		cin >> str;
		int i, l = strlen(str);
		if ('0'<=str[0]&&str[0]<='9') {
			cout << "no\n";
			continue;
		}
		for (i = 0; i < l; ++i) {
			if ('0'<=str[i]&&str[i]<='9') continue;
			if ('a'<=str[i]&&str[i]<='z') continue;
			if ('A'<=str[i]&&str[i]<='Z') continue;
			if (str[i]=='_') continue;
			break;
		}
		if (i == l) {
			cout << "yes\n";
		} else {
			cout << "no\n";
		}
	}
}