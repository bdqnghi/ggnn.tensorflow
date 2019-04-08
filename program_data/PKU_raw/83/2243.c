int main()
{
	int n,xf[10],cj[10],sum2=0,i;
	double xfjd[10],sum=0;
	double jd;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&xf[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&cj[i]);
		if(cj[i]>89&&cj[i]<101) jd=4.0;
        if(cj[i]>84&&cj[i]<90) jd=3.7;
        if(cj[i]>81&&cj[i]<85) jd=3.3;
        if(cj[i]>77&&cj[i]<82) jd=3.0;
        if(cj[i]>74&&cj[i]<78) jd=2.7;
       if(cj[i]>71&&cj[i]<75) jd=2.3;
        if(cj[i]>67&&cj[i]<72) jd=2.0;
         if(cj[i]>63&&cj[i]<68) jd=1.5;
        if(cj[i]>59&&cj[i]<64) jd=1.0;
        if(cj[i]<60) jd=0;
		xfjd[i]=jd*xf[i];
	}
	for(i=0;i<n;i++)
	{
		sum+=xfjd[i];
		sum2+=xf[i];
	}
	printf("%.2f",(float)sum/sum2);
	return 0;
}
