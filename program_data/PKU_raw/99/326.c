int main()
{
	int n,a[100],i;
	double b[4]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++)
	{
		if(a[i]<=18)
		{
			b[0]+=1;
		}
		else if(a[i]>=19&&a[i]<=35)
		{
			b[1]+=1;
		}
		else if(a[i]>=36&&a[i]<=60)
		{
			b[2]+=1;
		}
         else if(a[i]>60)
		{
			b[3]+=1;
		}
	}

		printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",b[0]/n*100,b[1]/n*100,b[2]/n*100,b[3]/n*100);

return 0;
}