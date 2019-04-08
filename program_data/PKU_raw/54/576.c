int main(){
	int i,j,k,l;//j???n???????
	cin>>i>>k;
	const int n=i;
	int a[n+1];//a[i]???i???????
	for(j=1,a[1]=0;a[1]==0;j++){
		a[n]=j*n+k;
		for(l=n-1;l>0;l--){
			if(a[l+1]%(n-1)==0)a[l]=a[l+1]/(n-1)*n+k;
			else break;
		}
	}
	cout<<a[1];
	return 0;
}