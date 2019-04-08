int main()
{
	int n,i;
	int a=0,b=0,c=0,d=0;
	double rate[4];
	scanf("%d",&n);
	int *age=(int *)malloc(sizeof(int)*n);
	
	for(i=0;i<n;i++)
	{
			scanf("%d",&(age[i]));
	}
	for(i=0;i<n;i++)
	{
		if(age[i]<=18)
			a++;
		if(age[i]>=19&&age[i]<=35)
			b++;
        if(age[i]>=36&&age[i]<=60)
			c++;
		if(age[i]>=61)
			d++;
	}
	rate[0]=(double)a/(double)n*100;
	rate[1]=(double)b/(double)n*100;
	rate[2]=(double)c/(double)n*100;
	rate[3]=(double)d/(double)n*100;
    printf("1-18: %.2lf%%\n",rate[0]);
    printf("19-35: %.2lf%%\n",rate[1]);
    printf("36-60: %.2lf%%\n",rate[2]);
    printf("60??: %.2lf%%\n",rate[3]);
	free(age);
	return 0;
}