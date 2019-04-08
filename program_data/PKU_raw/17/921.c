char s[1000];
void findr(int left){
    for(int i=left+1;s[i]!='\0';i++){
    	if(s[i]!='('&&s[i]!=')'&&s[i]!='$'&&s[i]!='?') s[i]=' ';
    	if(s[i]=='(') findr(i);
    	if(s[i]==')') {
    		s[i]=' ';
    		s[left]=' ';
    		return;
    	}
    }
    s[left]='$';
}



int main(){
	while(cin>>s){
	    cout<<s<<endl;
		for(int i=0;s[i]!='\0';i++){
			if(s[i]!='('&&s[i]!=')'&&s[i]!='$'&&s[i]!='?') s[i]=' ';
			if(s[i]=='(') findr(i);
			if(s[i]==')') s[i]='?';
			}
		cout<<s<<endl;
		}
	return 0;
}