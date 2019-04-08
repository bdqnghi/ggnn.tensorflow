int main(){
	int s[101][101];
	int k,m,n,i,*pointer1,*pointer2,i1,i2,sum=0;;
	cin>>k;
	for(i=1;i<=k;i++){
		cin>>m>>n;
		for(i1=0;i1<m;i1++){
			for(i2=0;i2<n;i2++)
				cin>>s[i1][i2];
		}
		pointer1=&s[0][1];
		pointer2=&s[0][0];
		for(i1=1;i1<n-1;i1++){
			pointer1=&s[0][i1];
			sum+=*pointer1;
		}
		for(i1=0;i1<m;i1++){
			if(n!=1){
			pointer1=&s[i1][n-1];
			pointer2=&s[i1][0];
			sum=sum+*pointer1+*pointer2;
			}
			else{
				pointer2=&s[i1][0];
			sum=sum+*pointer1+*pointer2;
			}
		}
		for(i1=1;i1<n-1;i1++){
			pointer2=&s[m-1][i1];
			sum+=*pointer2;
		}
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
}