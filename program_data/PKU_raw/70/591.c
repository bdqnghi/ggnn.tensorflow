double dis(double a,double b,double c,double d)
{
	double k;
	k=sqrt((a-c)*(a-c)+(b-d)*(b-d));
	return(k);
}
void main()
{
	int n,j,i;
	double a[100],b[100],max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%lf%lf",&a[i],&b[i]);
	max=dis(a[0],b[0],a[1],b[1]);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			if(dis(a[i],b[i],a[j],b[j])>max)
				max=dis(a[i],b[i],a[j],b[j]);
		}
	printf("%.4f\n",max);
}



