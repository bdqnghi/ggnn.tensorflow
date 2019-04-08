int main()
{
	int n,i,j,m,t,x,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		k=60;
		t=0;
	if(m!=0)
		{
			for(j=1;j<=m;j++)
			{
				scanf("%d",&x);
					k=k-3;
				    t=t+3;
				if(x+t>=60)
				{
					if(x+t<=65)
					{
					    k=x;
						break;
					}
					else
					{
						k=63-t;
				        break;
					}
				}
		    }   
	   }
	if(i==1)
		printf("%d",k);
	else
		printf("\n%d",k);
	}
 return 0;
}