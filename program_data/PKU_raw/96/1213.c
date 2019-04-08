
int main(){
	char num[101], quot[101];
	int r = 0, index = 0;

	cin >> num;
	for (int i = 0; num[i] != '\0'; i++){
		r = r * 10 + num[i] - '0';
		if (r < 13){
			if (index != 0)
				quot[index++] = '0';
		}else{
			quot[index++] = r / 13 + '0';
			r = r % 13;
		}
	}
	if (index == 0){
		cout << 0 << endl;
	}else{
		quot[index] = '\0';
		cout << quot << endl;
	}
	cout << r << endl;
	return 0;
}