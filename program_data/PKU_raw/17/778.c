int findRight(char s[], int pos, int l){
	int t;
	if (s[pos]=='\0') return -1;
	if (s[pos]=='('){
		t=findRight(s,pos+1,l+1);
		if (t==-1){
			s[pos]='$';
			return -1;
		}else {
			s[pos]=' ';
			return findRight(s,t+1,l);
		}
	}else if (s[pos]==')'){
		if (l==0){
			s[pos]='?';
			findRight(s,pos+1,l);
		}
		else {
			s[pos]=' ';
			return pos;
		}
	}else {
		s[pos]=' ';
		return findRight(s,pos+1,l);
	}
}
int main(){
	char s[1000];
	for (;cin >> s;){
		cout<<s<<'\n';
		findRight(s,0,0);
		cout<<s<<'\n';
	}
}
