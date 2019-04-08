void main()
{
	int n,m,i,j,p,t,a[10000],y=0,k,q=0,x=1,r,q1,g;
	
	scanf("%d%d",&m,&n);
	for(i=0;i<10000;i++)
		a[i]=0;
	for(i=m;i<=n;i++)
	{
	if(m<2)
		printf("2");
	p=0;
	for(j=2;j<i;j++)
	
		if(i%j==0)
		p=p+1;
	if(p==0)
		{
			if(i<10)
			{
				a[y]=i;
				y=y+1;
			}
			else
			{
				x=1;
			for(k=0;;k++)
			{
				x=x*10;
				if(x>i)
					break;
			}
			r=x/10;q=0;g=i;
			for(k=1;k<x;k=k*10)
			{
				if(g>=10)
				q1=g%10;
				else q1=g;
				q=q+r*q1;
				r=r/10;
				g=g/10;

			}
		
			if(q==i)
			{
				a[y]=i;
				y=y+1;
			}
			}
		}
	}
			
			if(a[0]==0)
		
			printf("no");
			else
			{
				printf("%d",a[0]);
			for(i=1;i<y;i++)
	printf(",%d",a[i]);
			}
}