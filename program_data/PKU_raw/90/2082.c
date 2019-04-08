/*??(15-11) ?????*/ 



int types(int m,int n);

int full(int m,int n)//m?????n???
{
	if(m<=n || n==1) return 1;
	else
	{
		return types(m-n,n);
	}
} 

int types(int m,int n)//m?????n??? 
{
	int num=0;
	int i;
	if(m<n) return types(m,m);
	else 
	{
		for(i=0;i<n;i++) num=num+full(m,n-i);
		return num;
	}
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int m,n;
    	cin>>m>>n;
    	cout<<types(m,n)<<endl;
    }
	return 0;
}