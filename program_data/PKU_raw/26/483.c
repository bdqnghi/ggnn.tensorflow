int main(){
	char s[101];
	cin.getline(s,101);
	int l=strlen(s);
	for(int i=0;i<l;i++){
		if(s[i]!=' '){
			cout<<s[i];
			if(i<l-1&&s[i+1]==' ')
				cout<<' ';
		}
	}
	return 0;
}
