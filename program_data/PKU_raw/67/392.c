int main()
{
	int n;
	double jsum,juse,a;
	int i,j;
	double xsum[100],xuse[100];
	scanf("%d",&n);
    scanf("%lf %lf",&jsum,&juse);
	a=juse/jsum;
    for(i=0;i<n-1;i++)
	{
		scanf("%lf %lf",&xsum[i],&xuse[i]);
	}
	for(j=0;j<n-1;j++)
	{
		if(((xuse[j]/xsum[j])-a)>0.05)
		{
			printf("better\n");
		}
		else if(((a-xuse[j]/xsum[j]))>0.05)
		{	
			printf("worse\n");
		}
		else 
			printf("same\n");
	}
	return 0;
}
