int max(int a,int b)
{
	if(a>b) return a;
	else return b;
}
int tianji(int *p1,int *p2,int n)
{
	if(n==0) return 0;
	if(*(p1+n-1)>*(p2+n-1)) {return tianji(p1,p2,n-1)+200;}
	if(*(p1+n-1)<*(p2+n-1)) {return tianji(p1,p2+1,n-1)-200;}
	if(*p1>*p2) {return tianji(p1+1,p2+1,n-1)+200;}
	if(*p1<*p2) {return tianji(p1,p2+1,n-1)-200;}
	if(*p1==*p2) {if(*(p1+n-1)==*p2) return tianji(p1,p2+1,n-1); else return tianji(p1,p2+1,n-1)-200;}
}
	
int main()
{
	int s,i,j,k,a[2000],b[2000],*p1,*p2,n,t;
	for(s=0;s<99;s++)
	{
		cin>>n;
	    if(n==0) break;
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=0;i<n;i++)
	    cin>>b[i];
	    for(i=1;i<n;i++)
	    {
	    	for(j=0;j<n-i;j++)
	    	{
	    		if(a[j+1]>a[j])
	    		{
	    			t=a[j];
	    			a[j]=a[j+1];
	    			a[j+1]=t;
	    		}
	    		if(b[j+1]>b[j])
	    		{
	    			t=b[j];
	    			b[j]=b[j+1];
	    			b[j+1]=t;
	    		}
	    	}
	    }
	    p1=a;
	    p2=b;
	    if(a[0]>a[n-1]&&b[0]>b[n-1])  cout<<tianji(p1,p2,n)<<endl;
	    else cout<<0<<endl;
	}
	return 0;
}
	    
	    
	    
	
	
	