

struct DIS
{
	int fir;
	int sec;
	double d;
};






int main()
{

   struct DIS dis[50];
   const double eps=1e-6;

   int x[11];
   int y[11];
   int z[11];
   int n,i,j,k=1;
   struct DIS temp;
   cin>>n;
   for(i=1;i<=n;i++)
   {
	   cin>>x[i]>>y[i]>>z[i];
   }
   for(i=1;i<=n-1;i++)
   {
	   for(j=i+1;j<=n;j++)
	   {
		   dis[k].fir=i;
		   dis[k].sec=j;
		   dis[k++].d=sqrt((double)(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
	   }
   }
   for(i=1;i<=n*(n-1)/2;i++)
   {
	   for(j=n*(n-1)/2;j>=i+1;j--)
	   {
		   if(dis[j].d>dis[j-1].d+eps)
		   {
			   temp.d=dis[j].d;
			  temp.fir=dis[j].fir;
			  temp.sec=dis[j].sec;
			   dis[j].d=dis[j-1].d;
			   dis[j].fir=dis[j-1].fir;
			   dis[j].sec=dis[j-1].sec;
			   
			   dis[j-1].d=temp.d;
			    dis[j-1].fir=temp.fir; 
				dis[j-1].sec=temp.sec;
		   }
	   }
   }
   for(i=1;i<=n*(n-1)/2;i++)
   {
	   cout<<"("<<x[dis[i].fir]<<","<<y[dis[i].fir]<<","<<z[dis[i].fir]<<")-("<<x[dis[i].sec]<<","<<y[dis[i].sec]<<","<<z[dis[i].sec]<<")="<<fixed<<setprecision(2)<<dis[i].d<<endl;
   }
	   

	

 
 return 0;

}

