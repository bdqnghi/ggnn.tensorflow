
int main() {
	char words[100][50];
	int i = 0;
	char c = '\0';
	cin >> words[0];
	c = getchar();
	while(c != '\n') {   // input part
		i++;
		cin >> words[i];
		c = getchar();
	}
	for(int j = i; j > 0; j--)    // output in the opposite order
		cout << words[j] << ' ';
	cout << words[0] << endl;
	getchar();
	getchar();
	return 0;
}