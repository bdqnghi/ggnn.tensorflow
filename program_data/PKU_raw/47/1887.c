void shuchu(){
	int a;
	char b;
	cin>>a;
	cin.get(b);
	if(b!='\n'){
		shuchu();
		cout<<b<<a;//?????? 
	    }
	    if(b=='\n')cout<<a;
	}
int main(){
	int m;
	cin>>m;
	shuchu();

	return 0;
	}