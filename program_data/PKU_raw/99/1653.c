int main()
{
	int n=0;
	scanf("%d",&n);
	int a[100]={0};
	int i=0;
	double b=0;
	 double c=0;
          double d=0;
double e=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);                                                                            
		if(a[i]>=1&&a[i]<=18){
			b=b+1;
		}
        if(a[i]>=19&&a[i]<=35){
			c=c+1;
		}
      if(a[i]>=36&&a[i]<=60){
		  d=d+1;
	  }
     if(a[i]>=61){
		 e=e+1;
	 }
	}
	printf("1-18: %.2f%%\n",100*b/(1.0*n));
    printf("19-35: %.2f%%\n",100*c/(1.0*n));
   printf("36-60: %.2f%%\n",100*d/(1.0*n));
    printf("60??: %.2f%%",100*e/(1.0*n));
	return 0;
}