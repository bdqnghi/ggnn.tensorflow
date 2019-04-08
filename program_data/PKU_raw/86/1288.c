int main(){
	int n;
	cin>>n;
	int sum[n];
	for(int i=0;i<n;i++){
		int m=0;
		cin>>m;
		if(m==0){
			sum[i]=60;
			continue;
		}
		int a[m];
		for(int j=0;j<m;j++)
			cin>>a[j];
		for(int j=0;j<m;j++){
			if(a[j]+3*j<=60&&a[j]+3*(j+1)>=60){
				sum[i]=a[j];break;}
			else if(a[j]+3*j<=60&&a[j]+3*(j+1)<60&&j==m-1){
				sum[i]=60-3*(j+1);break;}
			else if(a[j]+3*j>60){
				sum[i]=60-3*j;break;}

		}
	}
	for(int i=0;i<n;i++){
		cout<<sum[i]<<endl;
	}
	return 0;
}