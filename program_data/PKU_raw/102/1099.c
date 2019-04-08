int main()
{
	int n,i,j=0,k=0,h;
	double a[40],b[40],c[40];
	struct p{
		char sex[7];
		double height;
	}p[40];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%lf",p[i].sex,&p[i].height);
	}
	for(i=0;i<n;i++)
	{
		if(strcmp(p[i].sex,"male")==0)
		{
			a[j]=p[i].height;
			j++;

		}
		else{
			b[k]=p[i].height;
			k++;

			
		}
	}
	double t=0;
	for(h=0;h<j;h++)
	{
	for(i=0;i<j-1;i++)
	{
		if(a[i]>a[i+1])
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	}
	for(h=0;h<k;h++)
	{
		for(i=0;i<k-1;i++)
		if(b[i]<b[i+1])
		{
			t=b[i];
			b[i]=b[i+1];
			b[i+1]=t;
		}
	}
	for(i=0;i<j;i++)
	{
		c[i]=a[i];
	}
	for(i=j;i<n;i++)
	{
		c[i]=b[i-j];
	}
	printf("%.2lf",c[0]);
	for(i=1;i<n;i++)
	{
		printf(" %.2lf",c[i]);
	}
	return 0;
}



