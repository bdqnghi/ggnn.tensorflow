
int main() {
	int n=0;
	int a=0;
	int x=1;
	int y=1;
	int z=0;
	int j=0;
	cin>>n;
	for(int b=1;b<=n;b=b+1)
	{
		cin>>a;
	    for(int i=1;i<=a;i=i+1)
	    {
	    	j=i%3;
	        if(j==2)
	        	y=x+z;
		    if(j==1)
			    x=y+z;
		    if(j==0)
			    z=x+y;
	    }
	    int b=0;
	    int c=0;
	    b=max(x,y);
	    c=max(b,z);
	    cout<<c<<endl;
	    x=1;
	    y=1;
	    z=0;
	}
	return 0;
}