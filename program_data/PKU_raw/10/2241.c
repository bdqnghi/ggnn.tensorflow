int k=0,n,a[26]={0};
const int y=1000000;
void lanjie(int i, int m,int h)
{
    if(i==n+1) 
	{
		if(m>k) k=m;
		return ;
	}
	if(m+n-i<k) return ;
	if(h>=a[i])
	    lanjie(i+1,m+1,a[i]);
	lanjie(i+1,m,h);
	return;
}


int main()
{
    int i;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	lanjie(1,0,y);
	cout<<k<<endl;
	
	return 0;
}