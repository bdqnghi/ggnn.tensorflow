

char a[300];
char b[300];
char c[300];


int main(){
	cin >> a;
	cin >> b;
	int la ,lb;
	la = strlen(a);
	lb = strlen(b);
	if(la > lb){
		strcpy(c,a);
		strcpy(a,b);
		strcpy(b,c);
	}
	la = strlen(a);
	lb = strlen(b);
	for(int i = 0 ; i < 300 ; i++)
		c[i] = 0;
	c[0] = '0';
	for(int i = lb-1 ; i >= 0 ; i--){
		if(i >= lb - la){
			c[i+1] += b[i] + (a[i+la-lb] - '0');			
		}
		else{
			c[i+1] += b[i];
		}
		if(c[i+1] >'9'){
			c[i+1] -= 10;
			c[i] += 1;
		}
	}
	int i = 0;
	while(c[i] == '0')
		i++;
	if(i <= lb){
		for(; i <= lb; i++)
			cout << c[i];
	}
	else
		cout <<0;
	cout << endl;
	return 0;
}