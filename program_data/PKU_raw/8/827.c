/*
 * ????0908.cpp
 * ??????
 * ?????2012-11-23
 * ???????????
 */



void program(void){
	int m,n,i,j;
	cin>>m>>n;
	const int M=n,N=n;
	int a[M],b[N];
	for(i=0;i<m;++i)cin>>a[i];
	for(i=0;i<n;++i)cin>>b[i];
	for(i=0;i<m;++i)for(j=i+1;j<m;++j)if(a[i]>a[j]){
		a[i]=a[i]+a[j];
		a[j]=a[i]-a[j];
		a[i]=a[i]-a[j];
	}
	for(i=0;i<n;++i)for(j=i+1;j<n;++j)if(b[i]>b[j]){
			b[i]=b[i]+b[j];
			b[j]=b[i]-b[j];
			b[i]=b[i]-b[j];
		}
	cout<<a[0];
	for(i=1;i<m;++i)cout<<' '<<a[i];
	for(i=0;i<n;++i)cout<<' '<<b[i];
}

int main(){
	program();
	return 0;
}