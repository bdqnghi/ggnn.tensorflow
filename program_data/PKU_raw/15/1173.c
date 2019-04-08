int main()
{
	int n,a=-1,b=-1,c,d,x,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&x);
			if(x==0)
			{
				c=i;
				d=j;
				if((a==-1)&&(b==-1))
				{
					a=i;b=j;
				}
			}
		}
	}
	x=(c-a-1)*(d-b-1);
	printf("%d",x);
	return 0;
}