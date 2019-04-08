int main()
{
	int ec(int a,int b);     //?? ec????
	int x,y;
	cin>>x>>y;
	cout<<ec(x,y);               
	return 0;
}
int ec(int a,int b)       
{
	if(a==b)
		return a;           //??????        
	if(a>b)
	{	int t=a;              
		a=b;
		b=t;
	}
	return(ec(a,b/2));         //????
}