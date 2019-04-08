void main()
{
	int n,i,y=0,c,q=0,p=0;
	double z,x;
	scanf("%d",&n);
	if (n>4)
	{
		p=1;
		printf("3 5\n");
	}
	for (c=5;c<=n-2;c++)
	{
		z=sqrt(c);
    	for (i=2;i<=z;i++)
		{
			if (c%i==0)
			{
				y=0;
				break;
			}
			if (c%i!=0)
			{
				y=y+1;
			}
		}
		x=sqrt(c+2);
			for (i=2;i<=x;i++)
			{
		     	if ((c+2)%i==0)
				{
				q=0;
				break;
				}
			    if ((c+2)%i!=0)
				{
				q=q+1;
				}
			}
			if (y!=0&&q!=0)
			{
				p=1;
				printf("%d %d\n",c,c+2);
			}
	}
	if (p==0)
		printf("empty");
			
	


}