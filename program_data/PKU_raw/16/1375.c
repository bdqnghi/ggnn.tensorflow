int main()
{
    int a[10],n=0,k=1,i=0,b=1;
    cin>>n;
	if(!n) cout<<n<<endl;
    for(i=0;n!=0;i++)
    {
        a[i]=n%10;
	cout<<a[i];
        n=(n-a[i])/10;
    }
    return 0;
}