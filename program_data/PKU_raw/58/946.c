int main(){
	int n;
	cin>>n;
	char c;
	c=getchar();
	int flag=1,first=1;
	while(c=getchar()){
		if(c=='\n'){
			if(flag)cout<<1<<endl;
			else cout<<0<<endl;
			flag=1;first=1;n--;
			if(n==0)return 0;
		}else{
			if(first){
				flag=(c=='_'||(c>='a'&&c<='z')||(c>='A'&&c<='Z'));	
				first=0;
			}else{
				flag=flag&&((c=='_')||(c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9'));
			}
		}	
	}
	return 0;
}
