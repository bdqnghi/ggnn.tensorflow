main()
{
	int n,i;
double rat[100],e[100],su[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  {scanf("%lf %lf",&e[i],&su[i]);
	  rat[i]=su[i]/e[i];
	  if(i>0) 
	  	{
  		if(rat[i]-rat[0]>0.05)  printf("better\n");
  		else if(rat[i]-rat[0]<-0.05)  printf("worse\n");
  		else printf("same\n");
  	    }    
	  }
} 