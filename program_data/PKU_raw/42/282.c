int main(){
	int n,i,j,k,p=0;
	cin>>n;
	int a[100000];
	for(i=0;i<n;i++){
		cin>>a[i];
	}cin>>k;
	for(i=0;i<n-p;i++){
		if(a[i]==k){
			for(j=i;j<n-p-1;j++){
				a[j]=a[j+1];
			}p++;i--;
			if(j<n-1)continue;
		}
	}for(i=0;i<n-p-1;i++)
		cout<<a[i]<<' ';
	cout<<a[n-p-1];
	return 0;
}