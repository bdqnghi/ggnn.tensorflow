int main(){
	int k,m,n,a[100][100],i,j;
	int sum;
	cin>>k;
	while(k>0){
		cin>>m>>n;
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				cin>>*(*(a+i)+j);	
		if(m>1&&n>1){
		sum=0;
		for(j=0;j<n;j++){
			sum+=*(*(a)+j);
			sum+=*(*(a+m-1)+j);}
		for(i=0;i<m;i++){
			sum+=*(*(a+i));
			sum+=*(*(a+i)+n-1);}
		sum=sum-*(*(a))-*(*(a+m-1)+n-1)-*(*(a)+n-1)-*(*(a+m-1));
		cout<<sum<<endl;}
	else if(m==1&&n==1){
		sum=0;
		sum=*(*a);cout<<sum<<endl;}
	else if(m==1&&n>1){
		sum=0;
		for(j=0;j<n;j++){
			sum+=*(*(a)+j);}
		cout<<sum<<endl;}
	else if(n==1&&m>1){
		sum=0;
		for(i=0;i<m;i++){
			sum+=*(*(a+i));}
		cout<<sum<<endl;}
		k--;
	}	
}