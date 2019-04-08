int main(){
	int a=1,b=1,n,k,m,i;
	cin>>n;
	for(k=1;k<=n;k=k+1)
	{
		cin>>m;
		a=1,b=1;//?????????????a ?b??
		for(i=1;i<=(m-1)/2;i=i+1)
		{
		   a=a+b;
		   b=a+b;
		}
		if(m%2==1)
		{
			cout<<a<<endl;
		}
		else
		{
			cout<<b<<endl;
		}
           }
return 0;
}