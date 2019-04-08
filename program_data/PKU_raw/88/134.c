int main(){
	int i;
	char s[300];
	cin.getline(s,300);
	for(i=0;i<strlen(s);i++){
		if(s[i]>='0'&&s[i]<='9'){
			do{
				cout<<s[i];
				i++;
			}while(s[i]>='0'&&s[i]<='9');
			cout<<endl;
		}
	}
	return 0;
}