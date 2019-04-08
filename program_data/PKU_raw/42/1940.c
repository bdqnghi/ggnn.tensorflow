int main(){
	int n;
	cin>>n;
	int a[n];
	int i,j;
	for(i=0;i<=n-1;i++)
		cin>>a[i];
    int k;
    cin>>k;

    for(i=0;i<=n-1;i++)
    	if(a[i]==k){
    		for(j=i;j<=n-2;j++)
    			a[j]=a[j+1];
    		n--;
    		i--;
    	}
    cout<<a[0];
    for(i=1;i<=n-1;i++)
    	cout<<" "<<a[i];
    return 0;

}
