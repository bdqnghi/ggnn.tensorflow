int main()
{
	
	int n,i,a,suma=0,sumb=0,sumc=0,sumd=0,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a<=18)
		{
         suma++;
		}
		else if(a>=19&&a<=35)
		{
			sumb++;
		}
		else if(a>=36&&a<=60)
		{
			sumc++;
		}
		else if(a>60)
		{
			sumd++;
		}
		sum++;
	}
	
	printf("1-18: %.2lf%%\n",100.0*suma/sum);
	printf("19-35: %.2lf%%\n",100.0*sumb/sum);
	printf("36-60: %.2lf%%\n",100.0*sumc/sum);
	printf("60??: %.2lf%%",100.0*sumd/sum);
return 0;
}
