
void main()
{
	int n,a[100000]={0};
	int m,i,j=0,k;

	scanf("%d",&n);
	for(m=3;m<=n;m=m+2)
	{
		k=sqrt(m);
		for(i=2;i<=k;i++)
			if(m%i==0)
				break;
			if(i>=k+1)
			{
				a[j]=m;
				j++;
			}
	}
	
	if(j==1||j==0) printf("empty");
	else
	for(i=0;i<j-1;i++)
	{
		if(a[i+1]-a[i]==2)
		printf("%d %d\n",a[i],a[i+1]);
	}
}



				
