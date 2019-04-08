
int main()
{
	int n,i,flag=0,j=0,d[100]={0};
	float sum=0,aver=0,max=0,t=0,m=0;
	scanf("%d",&n);
	float a[100],b[100]={0},c[100]={0};
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}   
	aver=sum/n;
	for(i=0;i<n;i++)
	{
		m=a[i]-aver;
		if(m>0)
			b[i]=m;
		if(m<0)
			b[i]=-m;
	}
	for(i=0;i<n;i++)
	{
		if(b[i]>max)
			max=b[i];
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==max)
		{
			flag++;
		    c[j]=a[i];
			j++;
		}
	}
	for(j=0;j<flag-1;j++)
	{
		for(i=0;i<flag-1-j;i++)
		{
			if(c[i]>c[i+1])
			{   
				t=c[i];
				c[i]=c[i+1];
				c[i+1]=t;
			}
		}
	}
	for(i=0;i<flag;i++)
		d[i]=(int)c[i];
	
	printf("%d",d[0]);
			for(j=1;j<flag;j++)
	{
			printf(",%d",d[j]);
	}
	return 0;
}