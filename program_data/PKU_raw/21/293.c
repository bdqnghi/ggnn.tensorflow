void main()
{
	int n,a[300],sum=0;
	int i,j,k,t,x,temp,emo,b[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}

	for(j=0;j<n;j++)
	{
		b[j]=n*a[j]-sum;
	}

	for(k=0;k<n;k++)
		for(t=0;t<n-k-1;t++)
		{
           if(abs(b[t])<abs(b[t+1]))
		   {
			   emo=b[t];
			   b[t]=b[t+1];
			   b[t+1]=emo;
			   temp=a[t];
			   a[t]=a[t+1];
			   a[t+1]=temp;
		   }
		}

	printf("%d",a[0]);
	for(x=1;x<n;x++)
	{
		if(abs(b[x])==abs(b[0])) printf(",%d",a[x]);
	}
}
