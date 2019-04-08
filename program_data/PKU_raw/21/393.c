int main()
{
	int i,j,k,p,temp,x[300],z[300];
	float ave,total,y[300],max=0;
	total=0;
	p=0;
	scanf("%d",&k);
	for(i=0;i<=k-1;i++)	
	{
		scanf("%d",&x[i]);
		total+=x[i];
	}
	ave=total/k;
	for(i=0;i<=k-1;i++)
		y[i]=(fabs)(x[i]-ave);
	for(i=0;i<=k-1;i++)
	{
		if(y[i]>max) max=y[i];
	}
	for(i=0;i<=k-1;i++)
	{
		if((max-y[i])<0.00001)
		{
			z[p]=x[i];
			p++;
		}
	}
	for(i=0;i<=p-2;i++)
	{
		for(j=i+1;j<=p-1;j++)
		{
			if(z[j]<z[i])
			{
				temp=z[j];
				z[j]=z[i];
				z[i]=temp;
			}
		}
	}
	printf("%d",z[0]);
	for(i=1;i<=p-1;i++)
		printf(",%d",z[i]);
	return 0;
}