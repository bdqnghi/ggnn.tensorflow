int main(){
	int s,i,n,k,j;
	cin>>n>>k;
	for(i=1;;i++){
		s=n*i+k;
		for(j=1;j<n;j++){
			if(s%(n-1)==0)
				s=s*n/(n-1)+k;
			else if(s%(n-1)!=0)
				break;
		}
		if(j==n) {cout<<s<<endl;return 0;}
	}
}


