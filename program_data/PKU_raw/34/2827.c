void f(int n){
	while(n!=1){
		if((n%2)==1){cout<<n<<"*3+1="<<(3*n+1)<<endl;
		n=n*3+1;}
		else {cout<<n<<"/2="<<n/2<<endl;
		n=n/2;
		}
	}
	cout<<"End"<<endl;
}
int main(){
 int m;
 cin>>m;
 f(m);
 return 0;
}
