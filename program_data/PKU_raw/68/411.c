void main()
{
	long int a,i;i=6;
	scanf("%d",&a);	
	while (i<=a)
	{
		long int x,y;
		x=1;y=3;
		while(i!=x+y)
		{
nextx:   	{
				x=x+2;
				int k;
				k=sqrt(x);
				int p=2;
				while(p<=k)
				{if(x%p==0)break;
				p=p++;}
				/*for(int p=2;p<=k;p++)
					if(x%p==0) break;*/
				if(p<=k) goto nextx;
				
			}
			y=i-x;
			{
				    int u;
				    u=sqrt(y);
					int v=3;
					while(v<=u)
					{if(y%v==0)break;v=v+2;	}
				    /*for(int v=3;v<=u;v=v+2)
					    if(y%v==0) break;*/
				    if(v<=u) goto nextx;
			}
			
		}
	printf("%d=%d+%d\n",i,x,y);
	i=i+2;
	}
}