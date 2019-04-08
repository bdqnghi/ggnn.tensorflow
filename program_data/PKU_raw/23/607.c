char s[105];
int main(){
	cin.getline(s,sizeof(s));
	for(int i = strlen(s) - 1;i >= 0;i --){
		for(int j = i;j >= 0;j --){
			if(s[j] == ' '){
				cout << &s[j+1] << ' ';
				s[j] = '\0';
				i = j - 1;
				break;
			}
		}
	}
	cout << s << endl;
	return 0;
}
