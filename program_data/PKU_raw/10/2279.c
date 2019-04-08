inline int max(int a,int b)
{return a>b?a:b;}
int n,a[30];
int after(int i,int fin,int n);
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	a[0]=1000000;
	cout<<after(1,0,n)<<endl;
	return 0;
}

 int after(int i,int fin,int n)
 {
	 if(i==n)	
	 {
		if(a[n]<=a[fin])		 
		 return 1;
		else
			return 0;

	 }
	 else
	 {
		 int z;
		 if(a[i]<=a[fin])	z=max(1+after(i+1,i,n),after(i+1,fin,n));
		 else				z=after(i+1,fin,n);
		 return z;
	 }
 }
