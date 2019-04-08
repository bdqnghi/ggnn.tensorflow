int main()
{
	int sz[100],i,n,sum=0,b[4]={0};
	double c[4];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
		sum++;
		if(sz[i]>=1&&sz[i]<=18)
		{
			b[0]++;
		}
		else if(sz[i]>=19&&sz[i]<=35)
		{
			b[1]++;
		}
		else if(sz[i]>=36&&sz[i]<=60)
		{
			b[2]++;
		}
		else if(sz[i]>=61)
		{
			b[3]++;
		}
	}
	for(i=0;i<4;i++)
	{
		c[i]=(double)b[i]/sum;
	}
	printf("%d-%d: %.2lf%%\n",1,18,c[0]*100);
    printf("%d-%d: %.2lf%%\n",19,35,c[1]*100);
    printf("%d-%d: %.2lf%%\n",36,60,c[2]*100);
    printf("%d??: %.2lf%%\n",60,c[3]*100);
	return 0;
}





