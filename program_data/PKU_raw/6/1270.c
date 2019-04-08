int juzhen(int m,int n){
	int a[100][100];int s=0,i,j;
	for(i=1;i<=m;i++){
				for(j=1;j<=n;j++){
					cin>>a[i][j];
				}}
	int (*p)[100]=a;
	for(i=1;i<=n;i++)
		s+=*(*(p+1)+i);
	  for(i=2;i<=m;i++)
		  s+=*(*(p+i)+n);
	  for(i=n-1;i>=1;i--)
		  s+=*(*(p+m)+i);
	  for(i=m-1;i>1;i--)
		  s+=*(*(p+i)+1);
	  return s;
}
int main(){
	int k,m,n,t;
	cin>>k;
	for(t=1;t<=k;t++){
		cin>>m>>n;
		cout<<juzhen(m,n)<<endl;
	}
	return 0;
}