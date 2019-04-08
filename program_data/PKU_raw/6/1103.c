



int main(){

	int n=0;

	cin>>n;

	int result[100];

	for(int i=0;i<n;i++){
		
		int x=0;
		int y=0;

		cin>>x>>y;

		int r[100][100];

		for(int j=0;j<x;j++){
			for(int k=0;k<y;k++){
				cin>>r[j][k];
			}
		}

		result[i]=0;

		for(int j=0;j<x;j++){
			if(j==0||j==x-1){

				for(int k=0;k<y;k++){
					result[i]+=r[j][k];
				}

			}
			else{
			result[i]+=r[j][0];
			result[i]+=r[j][y-1];
			}
		}

	}

	for(int i=0;i<n;i++){
		cout<<result[i];
		if(i<n-1) cout<<endl;
	}

	return 0;


	
}