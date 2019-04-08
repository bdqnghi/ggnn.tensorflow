//????

int f(int x,int min){
	if(x<min) return 0;
	int r=1;
	for(int i=min;i<x/2;i++){
		if(x%i==0){
			r+=f(x/i,i);
		}
	}
	return r;
}

int main(){
	int n;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		cout<<f(x,2)<<endl;
	}
}
