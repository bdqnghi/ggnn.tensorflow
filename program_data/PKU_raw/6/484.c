
int main(){
	int m,n,i=1,j,a[101][101],s,k;
	int sum1,sum2,sum3,sum4,sum;
	cin>>s;
	while(i<=s){
		sum1=0;
		sum2=0;
		sum3=0;
		sum4=0;
		cin>>m;
		cin>>n;
		for(j=0;j<m;j++)
			for(k=0;k<n;k++){
				cin>>a[j][k];
			}
		for(j=0;j<n;j++)
			sum1+=a[0][j];
		for(j=0;j<n;j++)
			sum2+=a[m-1][j];
		for(j=0;j<m;j++)
			sum3+=a[j][0];
		for(j=0;j<m;j++)
			sum4+=a[j][n-1];
		sum=sum1+sum2+sum3+sum4;
		cout<<sum-a[0][0]-a[0][n-1]-a[m-1][0]-a[m-1][n-1]<<endl;
		i++;
	}
	return 0;
}