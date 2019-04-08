int f(int a,int b);
int main()
{
	int n,a,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		cout<<f(a,2)<<endl;
	}
	return 0;
}
int f(int x,int y)  //y?????
{
	int j,k,t=0,m=0;
	for(j=2;j<x;j++)
		if(x%j==0) t++;
		if(t==0) return 1; //?????,??1
		else 
		{
			for(k=y;k<=(int)sqrt((double)x);k++)
				if(x%k==0) 	m=m+f(x/k,k);
			 return (m+1);
		}
}
