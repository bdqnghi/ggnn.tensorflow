int main(){
	int n,i=0,k,e,t;
	int a[50000];
	int b[50000];
	int j=0;
	scanf("%d",&n);
	while (i<n)
	{
		scanf("%d %d",&a[i],&b[i]);
		i++;
	}
		

	for(k=1;k<=n;k++)
	{
		for(i=0;i<n-k;i++)
		{
			if(a[i]>a[i+1])
			{
				e=a[i];
				a[i]=a[i+1];
				a[i+1]=e;
				t=b[i];
				b[i]=b[i+1];
				b[i+1]=t;}
		}
	}
	for(i=0;i<n;i++)
	{
		if(b[i]<a[i+1])
		{
			j++;
		}
		else if(b[i]<=b[i+1])
		{
			a[i+1]=a[i];
		}
		else if(b[i]>b[i+1])
		{
			a[i+1]=a[i];
			b[i+1]=b[i];
		}
	}
	if(j==0)
	{
		printf("%d %d",a[n-1],b[n-1]);
	}
	else{
		printf("no");
	}
	return 0;
}