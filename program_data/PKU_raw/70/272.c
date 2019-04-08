int main()
{
	int n,i,k;
	double x[9999],y[9999],l,m;
	 scanf("%d",&n);
	 
	 for(i=1;i<=n;i++)
	 {
         scanf("%lf%lf",&x[i],&y[i]);
		   
	 }
        l=sqrt((x[1]-x[2])*(x[1]-x[2])+(y[1]-y[2])*(y[1]-y[2]));
     for(i=1;i<=n;i++)
	 {
        
		
			for(k=i+1;k<=n;k++)
			{
			   m=sqrt((x[i]-x[k])*(x[i]-x[k])+(y[i]-y[k])*(y[i]-y[k]));
			   if(m>l) l=m;
			   
			   
			}
		
	 }printf("%.4lf\n",l);
	 return 0;
}

