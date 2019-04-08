/*
 * ???????????.cpp
 * ??????
 * ?????2012.11.10
 * ??????????
 */
int main() {
	char str[10000];
	cin.getline(str, 10000);
	int i, j;
	for (i = 0; i < strlen(str); i++) {
		if (str[i] != ' ') {
			cout << str[i];
			continue;
		} else {
			for (j = i + 1; j < strlen(str); j++) {
				if (str[j] != ' ')
					break;
			}
			cout<<" ";
			i=j-1;
		}
	}
	return 0;
}
