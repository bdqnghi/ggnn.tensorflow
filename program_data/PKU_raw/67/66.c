int main()
{
	int n,i,j;
	double a[100],b[100],c[100],p,q,ww;
	scanf("%d",&n);
	scanf("%lf%lf",&p,&q);
	ww=q/p;
	for(i=0;i<n-1;i++)
	{
	    scanf("%lf%lf",&(a[i]),&(b[i]));
		c[i]=b[i]/a[i];
		if(c[i]-ww>0.05)
			printf("better\n");
		
		
		else	if(ww-c[i]>0.05)
			
			    printf("worse\n");
			else	if(ww-c[i]<=0.05||c[i]-ww<=0.05)
					printf("same\n");
			
		
	}

		
	return 0;
}
