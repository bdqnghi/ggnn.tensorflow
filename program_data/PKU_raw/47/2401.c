int main()
{
	int n,i,a[100],t,half;//a[100]????????t?????,half?????
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(n%2==0)
		half=n/2;
	else
		half=(n-1)/2;
for(i=0;i<half;i++)
{ 
	t=a[i];
	a[i]=a[n-i-1];
	a[n-1-i]=t;
}//????
for(i=0;i<n-1;i++)
{
	cout<<a[i]<<" ";
}
   cout<<a[n-1]<<endl;
	return 0;
}
