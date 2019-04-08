int main()
{
    int num;
    int store[100];
    for(num=0;;num++)
{
	int i,n,j;
	int a[100000],b[100000];
	scanf("%d",&n);
	if(n==0)
	{
            break;
            }
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	a[n]=2147483647;
	b[n]=2147483647;
	for(i=0;i<n;i++)
	{
		int t;
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{t=a[j];a[j]=a[j+1];a[j+1]=t;}
		}
	}
	for(i=0;i<n;i++)
	{
		int t;
		for(j=0;j<n-i;j++)
		{
			if(b[j]>b[j+1])
			{t=b[j];b[j]=b[j+1];b[j+1]=t;}
		}
	}
	int money=0,x,q=0;
	int m[100000];
	for(x=0;x<n;x++)
	{
		int t;
		t=a[0];
		for(i=0;i<n;i++)
		{
			a[i]=a[i+1];
		}
		a[n-1]=t;
	for(i=0;i<n;i++)
	{
		if(a[i]>b[i])
		{money=money+200;}
		else
		{
			if(a[i]<b[i])
			{money=money-200;}
		}
	}
	m[q]=money;
	money=0;
	q++;
	}
	int max=m[0];
	for(i=1;i<n;i++)
	{
		if(m[i]>=max)
			max=m[i];
	}
	store[num]=max;
	
}
int w;
for(w=0;w<num;w++)
{
printf("%d\n",store[w]);
}
}
