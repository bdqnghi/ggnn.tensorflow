
int s1[100] = {0};
int s2[100] = {0};
int s3[200] = {0};
int a = 0, b = 0;

void read() {    //??????????????????
     cin >> a >> b;
	 for(int i = 0; i < a; i++) {
		 cin >> s1[i];
	 }
	 for(int i = 0; i < b; i++) {
		 cin >> s2[i];
	 }
}

void sort1() { //???????????
	for(int i = 0; i < a - 1; i++) 
		for(int j = i + 1; j < a; j++) {
			if(s1[i] > s1[j]) {
				int temp = s1[i];
				s1[i] = s1[j];
				s1[j] = temp;
			}
		}
} 

void sort2() {  
	for(int i = 0; i < b - 1; i++) 
		for(int j = i + 1; j < b; j++) {
			if(s2[i] > s2[j]) {
				int temp = s2[i];
				s2[i] = s2[j];
				s2[j] = temp;
			}
		}
} 

void add() { //  ??????????
	for(int i = 0; i < a; i++)
		s3[i] = s1[i];
	for(int i = 0; i < b; i++)
		s3[i + a] = s2[i];
}

void write() { //  ?????????
	for(int i = 0; i < a + b - 1; i++) {
		cout << s3[i] << ' ';
	}
	cout << s3[a + b -1] << endl;
}
int main() {
	read();
	sort1();
	sort2();
	add();
	write();
	
	return 0;
}