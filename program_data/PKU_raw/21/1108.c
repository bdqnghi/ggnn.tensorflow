int main()
{
	int a[300],i,j,k,n,t,b[300];
	double aver,c,max,sum=0;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		{scanf("%d",&a[i]);
		sum=sum+a[i];}
	aver=sum/n;
		max=fabs(a[0]-aver);
	for(i=0;i<=n-1;i++){
    c=fabs(a[i]-aver);
	if(c>max)
		max=c;}
	for(i=0,j=0;i<=n-1;i++){
		c=fabs(a[i]-aver);
		if((max-c)<1e-6){
		b[j]=a[i];
		j++;
		}
	}
	for(k=0;k<j;k++){
		for(i=0;i<j-k-1;i++){
			if(b[i]>b[i+1])
			{t=b[i];b[i]=b[i+1];b[i+1]=t;}
		}
	}
	printf("%d",b[0]);
	for(i=1;i<j;i++)
				printf(",%d",b[i]);
			return 0;
}