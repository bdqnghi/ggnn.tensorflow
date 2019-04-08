int main()  
{
	int n=0,i=0,j=0;                                  //????
	double L=0;
	cin>>n;
	double x[n],y[n];
	for(i=0;i<n;i++)
		cin>>x[i]>>y[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(pow(pow(x[j]-x[i],2.0)+pow(y[j]-y[i],2.0),0.5)>L)
				L=pow(pow(x[j]-x[i],2.0)+pow(y[j]-y[i],2.0),0.5);
    }
	printf("%.4f\n",L);                                     //???????
    return 0;
}
