int main()
{
	int m;
	int j;
	int i;
	int a,b,e;
	scanf("%d",&m);
	for(i=3;i<=m/2;i++)
	{
		e=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				e++;
			}
		}
		if(e==0)
			{
				a=i;
				b=m-a;
				e=0;		
				for(j=2;j<b;j++)		
				{			
					if(b%j==0)			
					{				
						e++;			
					}
				}
				if(e==0)
				{
					printf("%d %d\n",a ,b);
				}
		}
	}
}
