int main ()
{
	int n,i,j,p[10005];
    cin>>n;
    //if (n!=32&&n!=64&&n!=128&&n!=256&&n!=512)cout<<n;
    if(n==1){cout<<0;return 0;}
    for(i=0;i<n;i++)p[i]=0;
    cin>>i>>j;
    if((i==0)&(j==0)){cout<<"NOT FOUND";return 0;}
    while (!((i==0)&&(j==0)))
    {
		p[i]=-100000;
		p[j]+=i;
		cin>>i>>j;
	}
	for(i=0;i<n;i++)if(p[i]==((n*(n-1)/2)-i)){cout<<i;return 0;}
	cout<<"NOT FOUND";	
    //while(1);
}