

int main(){
	int n;
	cin>>n;
	char ch[100],ch1[44];
	cin>>ch1;
	cout<<ch1;
	int sum=strlen(ch1)+1;
	for(int i=1;i<n;i++){
		cin>>ch;
		sum=sum+strlen(ch)+1;
		if(sum>81){
			cout<<endl<<ch;
			sum=strlen(ch)+1;
		}
		else
			cout<<' '<<ch;
	}
	return 0;
}

