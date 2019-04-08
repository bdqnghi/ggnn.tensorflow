
int main()


{

	int i,j,k,l,m,n,a[200]={0};

	cin>>n>>m;

	for(i=0;i<n;i++)

	  cin>>a[i];

	for(j=n-1;j>=0;j--)

	  a[j+m]=a[j];

	for(k=n;k<=n+m-1;k++)

		a[k-n]=a[k];

        for(i=0;i<n-1;i++)

             cout<<a[i]<<" ";

        cout<<a[n-1];

return 0;

}