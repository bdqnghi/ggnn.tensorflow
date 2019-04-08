

int main(){
	char words[MAX][50],m='i';
	int LEN=0;
	while(m!='\n'){
		cin>>words[LEN];
		LEN++;
		cin.get(m);
	}
	for(int i=0;i<LEN-1;i++) cout<<words[LEN-i-1]<<' ';
	cout<<words[0];
	return 0;
}