int main(){
	int n;
	cin>>n;
	while(n!=1){
		if(n%2){
			int t=n*3+1;
			cout<<n<<"*3+1="<<t<<endl;
			n=n*3+1;
		}
		else{
			int t=n/2;
			cout<<n<<"/2="<<t<<endl;
			n=n/2;
		}
	
	}
	cout<<"End"<<endl;
	return 0;
}
