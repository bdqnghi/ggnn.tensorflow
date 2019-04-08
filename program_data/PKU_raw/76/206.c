int main()
{
	int n,i,j;
	int max=0,min=100000;
	int a[100000],b[100000];
	int flag=0;
	int c[200000]={0};
	scanf ("%d",&n);
	for(i=1;i<=n;i++)
	{	scanf ("%d",&a[i]);
	    scanf ("%d",&b[i]);
        {
		for(j=2*a[i];j<=2*b[i]-1;j=j+1)	
		{
			if(c[j]==0) {c[j]=1;}	
		}
		if(a[i]<min) min=a[i];
		if(b[i]>max) max=b[i];
		}
	}
	
	for(j=2*min;j<=2*max-1;j=j+1)
	{
		if(c[j]==0)
			{flag=1;}
			}
	if(flag==0)
		{printf("%d %d",min,max);}
	else
	{printf("no");	}
	return 0;
}
