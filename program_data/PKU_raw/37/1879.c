
int main(){
	int n, count[26];
	char str[100001];

	cin >> n;
	while (n--){
		cin >> str;
		memset(count, 0, sizeof(count));
		int i;
		for (i = 0; str[i] != '\0'; i++)
			count[str[i] - 'a']++;

		for (i = 0; str[i] != '\0'; i++)
			if (count[str[i] - 'a'] == 1){
				cout << str[i] << endl;
				break;
			}
		if (str[i] == '\0')
			cout << "no" << endl;
	}
	return 0;
}