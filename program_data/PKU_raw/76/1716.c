int main(){
	int a[50000],b[50000],n,h,test,i;
	double x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	int min=a[0],max=b[0];
	for(i=1;i<n;i++)
	{
			if(b[i]>max)
			{
			   max=b[i];
            }
	}
	for(i=1;i<n;i++)
	{
			if(a[i]<min)
			{
			   min=a[i];
            }
	}
	for(x=min;x<=max;x+=0.1)
	{
		test=0;
		for(i=0;i<n;i++)
		{
			if(x>=a[i]&&x<=b[i]) {test=1; break;}
		}
		if(test==0) {printf("no");return 0;}
	}
	printf("%d %d",min,max);
	return 0;
}