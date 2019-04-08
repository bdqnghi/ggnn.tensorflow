int main()
{
	int n,i,j;
	double max,d,y[100],x[100];
	max=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>x[i]>>y[i];
	    for(i=0;i<n-1;i++)
		{ 
				for(j=i+1;j<n;j++)
				{
					d=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
		            if(max<d) max=d;
				    }
		}
		
	printf("%.4f\n",max);

return 0;
}