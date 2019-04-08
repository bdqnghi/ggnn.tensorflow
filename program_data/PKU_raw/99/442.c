int main()
{
	int n,z[100],i,sum1=0,sum2=0,sum3=0,sum4=0;
	double p1,p2,p3,p4;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&z[i]);
	
		if(z[i]<19)
		{
			sum1=sum1+1;
		}
		if(z[i]>18&&z[i]<36)
		{
			sum2=sum2+1;
		}
		if(z[i]>35&&z[i]<61)
		{
			sum3=sum3+1;
		}
		if(z[i]>60)
		{
			sum4=sum4+1;
		}
	}
	p1=(double)sum1/(double)n;
        p2=(double)sum2/(double)n;
        p3=(double)sum3/(double)n;
        p4=(double)sum4/(double)n;
	printf("1-18: %.2lf%%\n",p1*100);
	printf("19-35: %.2lf%%\n",p2*100);
	printf("36-60: %.2lf%%\n",p3*100);
	printf("60??: %.2lf%%",p4*100);
	return 0;
}