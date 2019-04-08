/*
 *????????
 *?????
 *??: 2011-1-7
 */


int main(){
    char s[100];
    cin.getline(s,100);
    int i=0;
    while(i<strlen(s)){
    	while(s[i]-'0'<=9&&s[i]-'0'>=0){
    		cout<<s[i];
    	    i++;
    	}
    	cout<<endl;
    	while(!(s[i]-'0'<=9&&s[i]-'0'>=0)&&i<strlen(s)){
    	    i++;
    	}
    }
	return 0;
}