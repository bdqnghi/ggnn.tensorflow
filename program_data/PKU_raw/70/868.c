int main()
{
	double x[100],y[100],a[1000],t=0.0,result=0.0;
	int n,j,i,k=0;
	cin>>n;
		for(j=0;j<n;j++)
		{cin>>x[j]>>y[j];}
		for(j=0;j<n-1;j++)
		{for(i=j+1;i<n;i++,k++)
		a[k]=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);}
       for(k=0;k<n*(n-1)/2;k++)
		   if(a[k]>t) t=a[k];
	      result=pow(t,0.50);
	   printf("%.4f\n",result);
	   return 0;
}