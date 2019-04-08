int hw(int i)
{
	int t=i;
         int d=0;
         while(t>0)
          {
             int j=t%10;
                 d=d*10+j;
                 t=t/10;
           }
         if(d==i)
		return 1;
	else 
		return 0;
}
void main()
{
	int m,n,x,j,b,c,a;
	b=0;
	a=0;
	c=0;
	scanf("%d %d",&m,&n);
	for(x=m;x<=n;x++)
	{
		for(j=2;j<x/2;j++) 
		{
          if(x%j==0)
		  {
		    a=0;
            break;
		  }
          else a=1;
		}
		if(a==1&&hw(x)==1)
		{
			b=b+1;
			if(b==1)
				printf("%d",x);
			else
				printf(",%d",x);
		}
		else
		{
			c=c+1;
			if(c==n-m+1)
				printf("no\n");
		}
	}
}