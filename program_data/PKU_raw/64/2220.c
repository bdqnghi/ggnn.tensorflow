//????
int main()
{
    int n,a[10],b[10],c[10],s=0,x[100],y[100],ht;
	double d[100],max;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i]>>c[i];//?????
	}
	for(int i=0;i<n;i++)
	{
	   for(int j=i+1;j<n;j++)
	   {
		   d[s]=sqrt((a[i]*1.0-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])+(c[i]-c[j])*(c[i]-c[j]));
		   x[s]=i;y[s]=j;
		   s++;
		   
	   }}//???????
	   for(int i=0;i<n*(n-1)/2;i++)
	   {
		   for(s=0;s<n*(n-1)/2-1;s++)
		 {
		   if(d[s]<d[s+1])
		   {
		      max=d[s];d[s]=d[s+1];d[s+1]=max;
			  ht=x[s];x[s]=x[s+1];x[s+1]=ht;
			  ht=y[s];y[s]=y[s+1];y[s+1]=ht;
		   }//????
		 }
	   }
	   for(s=0;s<=n*(n-1)/2 -1;s++)
	   {
		
            cout<<'('<<a[x[s]]<<','<<b[x[s]]<<','<<c[x[s]]<<")-("<<a[y[s]]<<','<<b[y[s]]<<','<<c[y[s]]<<')'<<'='<<setprecision(2)<<fixed<<d[s]<<endl;//??
	   }

	return 0;
	
}
