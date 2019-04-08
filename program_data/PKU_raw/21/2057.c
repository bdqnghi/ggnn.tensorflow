void sort(int min[],int n);
void main()
{
	int a[300],n,i,j=0,sum=0,min[300],m;
	float av,b[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	av=(float)sum/(float)n;
	for(i=0;i<n;i++)
	{
		if(a[i]>av)
		b[i]=a[i]-av;
		else
		b[i]=av-a[i];
	}
	m=0;
	for(i=0;i<n;i++)
		if(b[m]<b[i])
			m=i;
	for(i=0;i<n;i++)
		if(b[i]==b[m])
			min[j++]=a[i];
	{
	int i,x,t;
	for(i=0;i<j-1;i++)
		for(x=0;x<j-i-1;x++)
			if(min[x]>min[x+1])
			{
				t=min[x];
				min[x]=min[x+1];
				min[x+1]=t;
			}
	}
	for(i=0;i<j;i++)
	{
		printf("%d",min[i]);
		if(i!=j-1)
			printf(",");
	}

}
