int main()
{
	int a[16],b=0,c=0,d=1,e=0;
	scanf("%d",&a[b]);
	while(a[b]!=-1)
	{
		while(a[b]!=0)
		{
			b++;
		    scanf("%d ",&a[b]);
		}
	    while(c<=b)
		{
			while(d<b)
			{
				if(a[c]==(a[d]*2))
					e=e+1;
			    d=d+1;
			}
		    c=c+1;
		    d=0;
		}
	    printf("%d\n",e);
		b=0;
		scanf("\n%d",&a[b]);
		e=0;
		c=0;
	}
	return 0;
}