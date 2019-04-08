int main(){
	int n;
	cin>>n;
	int ai[n],aj[n];
	int c,d;
	for(int i=0;i<n;i++){
		ai[i]=aj[i]=0;
	}
	while(true){
		cin>>c;
		cin>>d;
		if(c==0&&d==0)break;
		else{
			ai[c]++;
		    aj[d]++;
		}
	}
	int j;
	for( j=0;j<n;j++){
		if(ai[j]==0&&aj[j]==n-1){
			cout<<j<<endl;
			break;}
	}
	if(j==n)cout<<"NOT FOUND"<<endl;
	return 0;
}