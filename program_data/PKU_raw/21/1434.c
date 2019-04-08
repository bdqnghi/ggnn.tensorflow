int main()
{
	int n,i,t,j,x[300],s[300],k=0;
	double a,y[300],sum=0,b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		sum+=x[i];
	}
	a=sum/n;
	for(i=0;i<n;i++)
	{
		if(x[i]>a){y[i]=x[i]-a;}
		if(x[i]<a){y[i]=a-x[i];}
	}
	for(i=0;i<n;i++)
	{
		if(y[i]>b){b=y[i];}
	}
	for(i=0;i<n;i++)
	{
		if(y[i]==b){
			s[k]=x[i];
			k=k+1;
		}
	}
    for(i=0;i<k;i++)
	{
		for(j=k-1;j>i;j--)
		{
			if(s[j]<s[j-1])
			{
				t=s[j];
				s[j]=s[j-1];
				s[j-1]=t;
			}
		}
	}
	for(i=0;i<k-1;i++)
	{
		printf("%d,",s[i]);
	}
	printf("%d",s[k-1]);

	
	return 0;
}
			
