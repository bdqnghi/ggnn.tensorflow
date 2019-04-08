
int main(){
	int len;
	char str[6];
	
	cin >> str;
	len = strlen(str);
	for (int i = len - 1; i >= 0; i--)
		cout << str[i];
	
	return 0;
}