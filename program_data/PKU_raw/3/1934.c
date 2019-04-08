int main(){
	int n;
	int k;
	int a[1010];
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i]; 
		}
	//???? 
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j]==k){
				cout<<"yes"<<endl;
				return 0; 
				} 
			} 
		}
	cout<<"no"<<endl;
	return 0; 
	} 