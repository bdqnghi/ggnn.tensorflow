int main()
{
	int n,i,j,k,b,c,r;
	scanf("%d",&n);
	int a[25000];
	for(i=0;i<=(n-6)/2;i++)
		a[i]=6+i*2;
	int sushu(int x);
	for(i=0;i<=(n-6)/2;i++)
	{
		for(j=2;j<=a[i]/2;j=j+1)
		{
			b=j;
			r=sushu(b);
			if(r!=0)
			{
				c=a[i]-b;
				if(sushu(c)!=0)
				{
					printf("%d=%d+%d\n",a[i],b,c);
					break;
				}
			}
		}
	}
	return 0;
}
int sushu(int x)
{
	int l,m=1;
	if(x!=2)
	{
	    for(l=2;l<=sqrt(x);l++)
		{
		    if(x%l==0)
			{
			    m=0;
			    break;
			}
		}
	}
	return(m);
}
