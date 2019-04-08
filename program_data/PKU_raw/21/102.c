/* Note:Your choice is C IDE */
void main()
{
	int a[100],n,i,j,t,sum=0;
	float x,y,z;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		if(a[j]>a[j+1])
		{t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;}
	}
	for(i=0;i<n;i++)
	{sum+=a[i];}
	
	x=(float)sum/n;
	y=a[n-1]-x;
	z=x-a[0];
	if(y>z) 
	{printf("%d",a[n-1]);
		for(i=1;i<n-1;i++)
		if(a[i]-x==y)
		printf(",%d",a[i]);
	}
	else
	{printf("%d",a[0]);
		for(i=1;i<=n-1;i++)
		if(a[i]-x==z||x-a[i]==z)
		printf(",%d",a[i]);
	}
}
	
	  