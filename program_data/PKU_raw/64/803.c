int main(){
	int a[10][3];
	int n;
	int i,j,k;
	//double ans[100];
	double ans[10][10];
	cin>>n;
	for(i = 0;i<n;++i){
		for(j = 0;j<3;++j){
			cin>>a[i][j];
		}	
	}
	
	for(i = 0;i<n;++i){
		for(j = i+1;j<n;++j){
			ans[i][j] = sqrt(pow((double)a[i][0]-a[j][0],2)+pow((double)a[i][1]-a[j][1],2)+pow((double)a[i][2]-a[j][2],2));
			//cout<<ans[i *n + j]<<" ";	
		}	
		//cout<<endl;
	}
	int sum = n*(n-1)/2;
	while(sum >0){
		sum--;
		int maxI = 0;
		int maxJ = 1;
		for(i = 0;i<n;++i){
			for(j = i+1;j<n;++j){
				if(ans[i][j] > ans[maxI][maxJ]){
					maxI = i;
					maxJ = j;
				}
			}	
		}
		//(1,1,0)-(1,1,1)=1.00
		cout<<"("<<a[maxI][0]<<","<<a[maxI][1]<<","<<a[maxI][2]<<")-("
		<<a[maxJ][0]<<","<<a[maxJ][1]<<","<<a[maxJ][2]<<")="
		<<fixed<<setprecision(2)<<ans[maxI][maxJ]<<endl;	
		ans[maxI][maxJ] = -9999999;
	}

	cin>>i;
	return 0;
}