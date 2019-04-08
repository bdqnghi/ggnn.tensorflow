int a[1000],b[1000];
int n,m;
void read(){
	int i;
	cin>>n>>m;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<m;i++)
		cin>>b[i];
}
void paixu(){
	int i,j,tem;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				tem=a[j];
				a[j]=a[j+1];
				a[j+1]=tem;
			}
		}
	}
	for(i=0;i<m-1;i++){
		for(j=0;j<m-1-i;j++){
			if(b[j]>b[j+1]){
				tem=b[j];
				b[j]=b[j+1];
				b[j+1]=tem;
			}
		}
	}
}
void combine(){
	int i;
	for(i=n;i<n+m;i++){
		a[i]=b[i-n];
	}
}
void put(){
	int i;
	for(i=0;i<m+n-1;i++)
		cout<<a[i]<<" ";
	cout<<a[i]<<endl;
}
int main(){
	read();
	paixu();
	combine();
	put();
	return 0;
}
