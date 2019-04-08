
int min(int a[])
{
	int n=0,i,x=a[0];
	while(a[n]!=0) n++;

	for(i=0;i<=n-1;i++)
		if(x>a[i]) x=a[i];

	return x;
}

int f(int a[])
{
	int n=0;
	while(a[n]!=0) n++;

	if(n==1)
		return 1;
	else
	{
		int b[25],c[25],i;
		if(a[n-1]==min(a))
		{
			for(i=0;i<=n-2;i++)
				b[i]=a[i];
			b[n-1]=0;

			return 1+f(b);
		}
		else
		{
			int k=0;
			for(i=0;i<=n-1;i++)
			{
				if(a[i]!=min(a))
				{
					b[k]=a[i];
					k++;
				}
			}
			b[k]=0;

			do n--;
			while(a[n]!=min(a));
			for(i=0;i<=n;i++)
				c[i]=a[i];
			c[n+1]=0;

			return f(b)>f(c)?f(b):f(c);
		}
	}
}

void main(void)
{
	int n,a[25];
	scanf("%d",&n);
	int k;
	for(k=0;k<=n-1;k++)
		scanf("%d",&a[k]);
	a[n]=0;

	printf("%d\n",f(a));
}