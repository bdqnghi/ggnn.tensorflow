int f(int n,int k);
int main( )
 {  int n,k,i,y;
    cin>>n>>k;
	
	 y=f(n,k);
	cout<<y<<endl;
	 return 0;
	}
int f(int n,int k)
{    int j,x,i,t;
   for (i=2;1;i++)
   { t=i;
	   for (j=1;j<=n;j++)
   { if ((t-k)%n!=0)
     break;
      t=(t-k)*(n-1)/n;}
   if (j==n+1)
   { x=i;
   break;}}
	return x;}
