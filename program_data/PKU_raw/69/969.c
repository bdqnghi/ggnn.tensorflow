
char a[300], b[300], c[301];
int la, lb;

void F(){
	int i;
	la = strlen(a);
	lb = strlen(b);
	for(i = 0;i < 300;i++)
		c[i] = '0';
	c[300] = '\0';
	for(i = 299;i > 0;i--){
		if(la - 300 + i >= 0)
			c[i] += a[la - 300 + i] - '0';
		if(lb - 300 + i >= 0)
			c[i] += b[lb - 300 + i] - '0';
		if(c[i] > '9'){
			c[i - 1] ++;
			c[i] -= 10;
		}
	}
	for(i = 0;i < 300;i++){
		if(c[i] != '0')
			break;
	}
	if(i == 300){
		cout << '0' << endl;
		return;
	}
	cout << c + i << endl;
	return;
}

int main(){
	cin >> a >> b;
	F();
	return 0;
}