const int maxn=100;	
int main()
{
	int i=0,x=1,n=0;
	int a[maxn];
	cin>>n;
    for(int j=0;j<=n-1;j++)
		cin>>a[j];
    while(i<(n+1)/2)
	{   x=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=x;
		i++;
	}
    for(int k=0;k<=n-2;k++)
             cout<<a[k]<<" ";
    cout<<a[n-1];
	return 0
		;
}