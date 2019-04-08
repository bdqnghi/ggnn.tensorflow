
void main()
{
	int n,i=0,j=1,k=0,t=0;
	int a[500]={0},b[300]={0};
	double sum=0,ave=0,c=0,d=0;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	ave=sum/n;
	b[0]=a[0];
	c=ave-b[0];
	if(c<0) c=-c;
	for(i=1;i<n;i++)
	{
		d=ave-a[i];
		if(d<0) d=-d;
		if(d>c) 
		{
			b[0]=a[i];
			c=d;
		}
		else if(d==c) 
		{
			b[j]=a[i];
			j++;
		}
	}

	if(j==1) printf("%d",b[0]);
	else 
	{
		for(i=0;i<j-1;i++)
			for(k=0;k<j-1-i;k++)
			{
				if(b[k]>b[k+1])
				{
					t=b[k];
					b[k]=b[k+1];
					b[k+1]=t;
				}
			}
	for(i=0;i<j;i++)
		if(i==0) printf("%d",b[i]);
		else
		printf(",%d",b[i]);
	}
}



