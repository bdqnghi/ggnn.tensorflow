
int n;
int k;

int main (){
	
	cin>>n>>k;
	int t=0;
	while(true){
		t++;
	int i=1;
	int r=t*n+k;
	
	while(i<n){
		
		if(r*n%(n-1)!=0){
			break;
		}
		r=r*n/(n-1)+k;
		i++;
	}

	if(i==n){
	cout<<r;
	break;
	}

	}

}