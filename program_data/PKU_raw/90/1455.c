


int dt(int m,int n){
	int re=0;
	if(m>=n) re+=dt(m-n,n);
	if(n>1) re+=dt(m,n-1);
	if(m<=1&&n<=1) re=1;
	return re;
}


int main(){

	int t=0;

	cin>>t;

	for(int i=0;i<t;i++){
		
		int m,n;

		cin>>m>>n;

		cout<<dt(m,n);

		if(i<t-1) cout<<endl;
	}

	return 0;
}



