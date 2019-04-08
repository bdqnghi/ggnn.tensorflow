
void print_str(char* str, int len)
{
	for(int i=0; i<len; i++) {
		cout << str[i];
	}
	cout << endl;
}

int main()
{
	int n, cur_i=0;
	cin >> n;
	while(cur_i < n) {
		cur_i ++;
		char str[300];
		cin >> str;
		
		int len=strlen(str);
		if(str[len-2] == 'e' && str[len-1] == 'r') {
			print_str(str, len-2);
		} else if(str[len-2] == 'l' && str[len-1] == 'y') {
			print_str(str, len-2);
		} else if(str[len-3] == 'i' && str[len-2] == 'n' && str[len-1] == 'g') {
			print_str(str, len-3);
		} else {
			print_str(str, len);
		}
	}

	return 0;
}