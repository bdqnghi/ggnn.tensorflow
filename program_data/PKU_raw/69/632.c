char a[251], b[251];
int c[250]={0}, d[250]={0}, e[251]={0}, maxLen=0;
void f(char *str, int *num){
	int len = strlen(str);
	int i, j;
	for(i = 0; i < len; i ++){
		if(a[i] != '0')
			break;
	}
	if(len - i > maxLen){
		maxLen = len - i;
	}
	for(j = len - 1; j >= i; j --){
		num[len-1-j] = str[j] - '0';
	}
}
int main(){
	int i;
	cin >> a >> b;
	f(a, c);
	f(b, d);
	int n = maxLen;
	for(i = 0; i < n; i ++){
		int jinwei = (e[i]+c[i]+d[i]) / 10;
		e[i] = (e[i] + c[i]+d[i]) % 10;
		e[i+1] += jinwei;
	}
	if(e[n] != 0){
		n ++;
	}
	if(n == 0){
		cout << 0 << endl;
	}
	for(i = n - 1; i >= 0; i --){
		if(e[i] != 0){
			break;
		}
	}
	for(int j = i; j >= 0; j --){
		cout << e[j];
	}
	cout << endl;
	return 0;
}
