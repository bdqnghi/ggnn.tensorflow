int main(){
    char str[50];
	cin>>str;
	cout<<str;
	for(;cin.get()!='\n';)
	{
		cin>>str;
		cout<<" "<<str;
		memset(str,'\0',sizeof(str));
	}
	cout<<endl;
	return 0;
}
