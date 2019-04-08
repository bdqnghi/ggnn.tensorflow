int main()
{
	double m=1.0,w=2.0,k=0.0,h,sum=0,n;
	int a[100]={0},i,j;
    cin>>n;
	for (i=1;i<=n;i++)
		{
	      cin>>a[i];
		}
	for (i=1;i<=n;i++)
		{
          h=a[i];
		  for (j=1;j<=h;j++)
			{
             sum+=w/m;
			 k=m;
			 m=w;
			 w=k+w;
			}
		  cout<<fixed<<setprecision(3)<<sum<<endl;
		  sum=0,m=1.0,w=2.0,k=0.0;
		}
	return 0;
}