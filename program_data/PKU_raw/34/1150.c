int main(){
	int n;int i;
	cin>>n;
	if(n==1)cout<<"End"<<endl;else{
	for(i=1;;i++){
		if(n==1)break;
		if(n%2!=0){cout<<n<<'*'<<'3'<<'+'<<'1'<<'='<<3*n+1<<endl;
		n=3*n+1;
		}
		else {cout<<n<<'/'<<'2'<<'='<<n/2<<endl;
		n=n/2;
		}
	}
	cout<<"End"<<endl;}
	return 0;
}
