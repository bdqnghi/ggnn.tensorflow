int main()
{
    int i,sum1=0,sum2=0,sum3=0,sum4=0;
	double n;
	int p[102];
	scanf("%lf",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
    for(i=0;i<n;i++)
	{
		if(p[i]<=18)
		  sum1+=1;
        else if(p[i]<=35)
			sum1+=0;
        else if(p[i]<=60)
			sum1+=0;
        else 
			sum1+=0;
	}
for(i=0;i<n;i++)
	{
		if(p[i]<=18)
		  sum2+=0;
        else if(p[i]<=35)
			sum2+=1;
        else if(p[i]<=60)
			sum2+=0;
        else 
			sum2+=0;
	}
for(i=0;i<n;i++)
	{
		if(p[i]<=18)
		  sum3+=0;
        else if(p[i]<=35)
			sum3+=0;
        else if(p[i]<=60)
			sum3+=1;
        else 
			sum3+=0;
	}
for(i=0;i<n;i++)
	{
		if(p[i]<=18)
		  sum4+=0;
        else if(p[i]<=35)
			sum4+=0;
        else if(p[i]<=60)
			sum4+=0;
        else 
			sum4+=1;
	}
	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",(double)((sum1*100)/n),(double)((sum2*100)/n),(double)((sum3*100)/n),(double)((sum4*100)/n));
	return 0;
}

