int s(int m,int n)
{   int a=0;
   if(n!=1)
   {
	for(int i=0;m-i*n>=0;++i)
	{
		a+=s(m-i*n,n-1);
	}
   }
   else
   {
	   return 1;
   }
   return a;
}
int main()
{  
	int t,m,n;
	cin>>t;
	for(int i=0;i<t;++i)
	{   
		cin>>m>>n;
		cout<<s(m,n)<<endl;
	}
	return 0;
}

