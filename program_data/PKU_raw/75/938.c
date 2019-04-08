void main()
{
	int max(int a[],int n);
	int min(int a[],int n);
	int a[1000],b[1000],i=1,j,c[1000]={0},count=0,n,maxa,maxb,mina,minb,max_,min_,max0,maxman;
	scanf("%d",&a[0]);
	while(getchar()==',')
	{
		scanf("%d",&a[i]);
		i++;
	}
	n=i;
	i=1;
	scanf("%d",&b[0]);
	while(getchar()==',')
	{
		scanf("%d",&b[i]);
		i++;
	}
	maxa=max(a,n);
	maxb=max(b,n);
	mina=min(a,n);
	minb=min(b,n);
	if(maxa>=maxb)max_=maxa;else max_=maxb;
	if(mina<=minb)min_=mina;else min_=minb;
	for(max0=min_;max0<=max_;max0++)
	{
		for(i=0;i<n;i++)
		{
			if(max0>=a[i]&&max0<b[i])
				c[count]++;
		}
		count++;
	}	
	count--;
	maxman=c[0];
	for(i=1;i<=count;i++)
	{
		if(c[i]>=maxman)maxman=c[i];
	}
	printf("%d %d\n",n,maxman);
}

int max(int a[],int n)
{
	int b,i;
	b=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>=b)b=a[i];
	}
	return b;
}

int min(int a[],int n)
{
	int b,i;
	b=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<=b)b=a[i];
	}
	return b;
}
	



	

	



		
	





			

	

