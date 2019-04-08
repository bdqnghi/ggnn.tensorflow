
int main(){
	int a[99],n=0,i=0,j=0,e=0;
	cin>>n;
	for(i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}
	for(j=n-1;j>0;j--)
		cout<<a[j]<<" ";
		cout<<a[0];
		return 0;
}
