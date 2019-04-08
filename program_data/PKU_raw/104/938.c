int f(int a,int b)
{
	
	if(a==b)
		return a;
	else if(a>b)
		 return f(a/2,b);
	else if(a<b)
		 return f(a,b/2);

}



int main()
{
	int x,y;
	cin>>x>>y;
	f(x,y);
	
	cout<<f(x,y)<<endl;


	return 0;
}


    

