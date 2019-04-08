int main(){
	int n,tr;cin>>n;
	int a[n];
	int *p=a;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0,j=n-1;i<j;i++,j--)
	{
		tr=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=tr;
	}
	for(int i=0;i<n-1;i++)cout<<a[i]<<" ";
	cout<<a[n-1];//*?p+i???????a???i???


return 0;
}

