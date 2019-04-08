int f(int m,int n)                           //m??????n?????
{
	if (m==1||n==1||m==0)       
		return 1;                          
	if (m <0)                         
		return 0;                          
	return f(m,n-1) + f(m-n,n);               
}
int main()
{
	int t,i=1,a,b;                                 //t?????????a?????b????
	cin>>t;
	while(i<=t)
	{
		cin>>a>>b;                          
		cout<< f(a,b)<<endl;                      
		i++;
	}
	return 0;
}                                                       

