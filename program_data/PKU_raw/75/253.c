int a[1001],b[1001],n=1,m=1;
int k[1001]={0};
char c;
void scan()
{
	scanf("%d",&a[0]);
	while(1)
	{
		scanf("%c",&c);
		if(c==',')
		{
			scanf("%d",&a[n]);
			n++;
		}
		else 
			break;
	}
	scanf("%d",&b[0]);
	while(1)
	{
		scanf("%c",&c);
		if(c==',')
		{
			scanf("%d",&b[m]);
			m++;
		}
		else 
			break;
	}
}
void main()
{
	int i,l;
	scan();
	for(i=0;i<=1000;i++)
	{
		for(l=0;l<n;l++)
		{
			if((i>=a[l])&&i<b[l])
				k[i]++;
		}
	}
	l=k[0];
	for(i=0;i<=1000;i++)
	{
		l=l>k[i]?l:k[i];
	}
	printf("%d %d",n,l);
}
