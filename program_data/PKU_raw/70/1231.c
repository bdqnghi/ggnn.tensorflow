int main()
{
  int n;
  cin>>n;
  double x[100],y[100],dis[10000];
  for(int i=0;i<n;i++)
  {
    cin>>x[i]>>y[i];
  }
  int count=0;
  for(int i=0;i<n-1;i++)
	  for(int j=i+1;j<n;j++)
		  dis[count++]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
  double max=0;
  for(int start=0;start<count;start++)
  {
    if(dis[start]>max)
		max=dis[start];
  }
  cout<<max<<setprecision(4)<<fixed<<endl;

  return 0;
}