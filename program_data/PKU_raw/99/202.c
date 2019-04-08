int main()
{
	int a[4]={0},b[100],sum=0;
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		if(b[i]<=18)
			a[0]++;
		else if(b[i]>18&&b[i]<36)
			a[1]++;
        else if(b[i]>35&&b[i]<61)
			a[2]++;
		else 
			a[3]++;
    }
	sum=n;
	printf("1-18: %.2lf%%\n",(double)a[0]/(double)sum*100);
	printf("19-35: %.2lf%%\n",(double)a[1]/(double)sum*100);
	printf("36-60: %.2lf%%\n",(double)a[2]/(double)sum*100);
	printf("60??: %.2lf%%\n",(double)a[3]/(double)sum*100);
	return 0;
}