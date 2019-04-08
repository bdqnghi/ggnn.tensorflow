int main()
{
	int n,i=6,t,a,b=3,c,s;
	scanf ("%d",&n);
	for (i=6;i<=n;i++)
	{
		for(b=3;b<=(i/2);b++)
		{	
			for (t=2;t<=(sqrt(b));t++)
			{
				a=b%t;
				if(a==0&&b!=t)	
					break;	
			}
			if (a!=0)
			{
				for (s=2;s<=(sqrt(i-b));s++)
				{
					c=(i-b)%s;
					if (c==0&&s!=(i-b))	
						break;
				}
				if(c!=0)
				{
		        	printf("%d=%d+%d\n",i,b,(i-b));	
					break;
				}
			}
		}			
		i++;		
	}
	return 0;
}

