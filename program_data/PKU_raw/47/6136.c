int main()
{
	int n;cin>>n;
	int a[n];int tr,i;
	for( i=0;i<n;i++)cin>>a[i];
	i--;
	for(int j=0;j<i;j++,i--)
	{
		tr=a[j];a[j]=a[i];a[i]=tr;
	}
	for( i=0;i<n;i++){
		if(i==0)cout<<a[i];
		else cout<<" "<<a[i];
	}
return 0;
}
