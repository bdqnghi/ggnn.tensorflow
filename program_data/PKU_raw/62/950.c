int main(){
	char str[101][101];
	int n=1;
	char (*p)[101]=NULL;
	while(cin>>str[n])n++;
	for(p=str+1;p<str+n-1;p++){
		cout<<*p<<" ";
	}
	cout<<*p;
	return 0;
}