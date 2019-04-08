int main(){
	int n;
	cin>>n;
	char a[500][41];
	int b[500];
	int i,j,sum=0,k=0;
	char (*p)[41]=a;
	int *q=b;
	for(i=0;i<n;i++)
		cin>>*(p+i);
	for(i=0;i<n;i++)
		*(q+i)=strlen(*(p+i))+1;
	for(i=0;i<n;i++){
		sum=sum+*(q+i);
		if(sum>81){
			for(j=k;j<i-1;j++){
				cout<<*(p+j)<<' ';
			}cout<<*(p+i-1)<<endl;
			sum=*(q+i);
			k=i;
		}
	}
	for(j=k;j<n-1;j++){
		cout<<*(p+j)<<' ';
	}cout<<*(p+n-1)<<endl;
	return 0;
}