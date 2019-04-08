


int main(){

	int n=0;
	cin>>n;
	int result[300];

	for(int i=0;i<n;i++){

		int s[30];
		int k=0;
		int times=0;
		int sum=60;

		do{
			cin>>s[k];
			k+=1;
		}
		while(cin.get()!='\n');
		
		for(int j=1;j<=s[0];j++){
			int sup=60-3*times-s[j];
			if(sup>0){
				times+=1;
				if(sup<3){
					sum-=sup;
				}
				else{
					sum-=3;
				}
			}
			else{
			break;
			}
		}

		result[i]=sum;

	}

	for(int i=0;i<n;i++){
		cout<<result[i];
		if(i<n-1){
		cout<<endl;
		}
	}

	return 0;
	
}