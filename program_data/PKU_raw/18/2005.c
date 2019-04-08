int main(){
	int a[101][101];
	int n,i,j,t,min,count=0,m;
	cin>>n;
	for(m=0;m<n;m++){
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				cin>>a[i][j];
		count=0;
		for(t=n;t>=2;t--){
			for(i=1;i<=t;i++){
				min=a[i][1];
				for(j=1;j<=t;j++)
					min=(a[i][j]<min?a[i][j]:min);
				for(j=1;j<=t;j++)
					a[i][j]-=min;
			}
			for(j=1;j<=t;j++){
				min=a[1][j];
				for(i=1;i<=t;i++)
					min=(a[i][j]<min?a[i][j]:min);
				for(i=1;i<=t;i++)
					a[i][j]-=min;
			}
			count+=a[2][2];
			for(i=2;i<=t-1;i++)
				for(j=1;j<=t;j++)
					a[i][j]=a[i+1][j];
			for(j=2;j<=t-1;j++)
				for(i=1;i<=t-1;i++)
					a[i][j]=a[i][j+1];
		}
		cout<<count<<endl;
	}
	return 0;
}
