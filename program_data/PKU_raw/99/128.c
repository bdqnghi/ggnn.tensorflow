int main()
{
	int n,i,a[100]={0},b[4]={0};
	double c[4];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<=18)
			b[0]=b[0]+1;
		else if(a[i]>=19&&a[i]<=35)
			b[1]=b[1]+1;
		else if(a[i]>=36&&a[i]<=60)
			b[2]=b[2]+1;
		else if(a[i]>60)
			b[3]=b[3]+1;
	}
	c[0]=(double)b[0]/n*100;
	c[1]=(double)b[1]/n*100;
	c[2]=(double)b[2]/n*100;
	c[3]=(double)b[3]/n*100;
	printf("1-18: %.2f%%\n",c[0]);
	printf("19-35: %.2f%%\n",c[1]);
	printf("36-60: %.2f%%\n",c[2]);
	printf("60??: %.2f%%\n",c[3]);
}
