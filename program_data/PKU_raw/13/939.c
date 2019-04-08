int main()
{
	int n,i,s,k,l;   //n?????
	cin>>n;
	int a[n],b[n];           //a??????????????1?????0 
	for(i=0;i<=n-1;i=i+1){
		cin>>b[i];   //b???????
		a[i]=0;
	}
	for(i=n-1,k=0;i>=1;i=i-1){
		for(s=i-1;s>=0;s=s-1){
			if(b[i]-b[s]==0){
				a[i]=1;  //??????a????1
				k=k+1;
				break;
			}

		}
	}
		if(n-k==1)cout<<b[0];
		else{
	for(i=0,l=0;i<=n-1;i=i+1){
		if(a[i]==0){ 
			l=l+1;    
			if(l-n+k<0)cout<<b[i]<<" ";  //l-n+k??????????
			else cout<<b[i];
		}
	}}
	return 0;
}

