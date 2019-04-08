int main()
{
	int n,i,j,count=0;
	float average=0,max=0,sum=0,a[300],tmp,x[300],gap;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
		sum+=a[i];
	}
    average=sum/n;
	max=fabs(a[0]-average);
	for(i=0;i<n;i++)
	{
		gap=fabs(a[i]-average);
		if(gap>max)
			max=gap;
	}
	count=0;
	for(i=0;i<n;i++)
	{
		gap=fabs(a[i]-average);
		if((fabs(gap-max))<0.001)
			x[count++]=a[i];
	}
	for(j=0;j<count-1;j++)
		for(i=0;i<count-j-1;i++)
			if(x[i]>x[i+1])
			{
				tmp=x[i];
				x[i]=x[i+1];
				x[i+1]=tmp;
			}
    printf("%.f",x[0]);
	if(count>1)
		for(i=1;i<count;i++)
			printf(",%.f",x[i]);
	return 0;
}