float abs(float a,int b)
{
	if(a>b)
		return(a-b);
	else
		return(b-a);
}
void bubble(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

void main()
{
	int n,a[310],i,flag=0;
	float s=0,p=0,max=-1.0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	bubble(a,n);
	p=s/n;
	for(i=0;i<n;i++)
	{
		if(abs(p,a[i])>max)
			max=abs(p,a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(abs(p,a[i])==max && flag==0)
		{
			printf("%d",a[i]);
			flag=1;
		}
		else
			if(abs(p,a[i])==max && flag==1)
				printf(",%d",a[i]);
	}
}
			

