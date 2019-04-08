int main()
{
	int h,k,s,m,n;
	int a,b,t=4;
	scanf("%d" , &n );
	for(t=6;t<=n;t=t+2)
	{
		for(a=2;a<=t/2;a++)
		{
			m=0;
			for(k=1;k<=sqrt(a);k++)
			{
				if (a%k==0) m=m+k;
			}
			if (m==1)
			{
				s=0;
				b=t-a;
				for(h=1;h<=sqrt(b);h++)
				{
					if(b%h==0) s=s+h;
				}
			}
			if(s==1)
			{
				printf("%d=%d+%d\n" , t , a , b);
				break;
			}
		}
	}
	return 0;
}
	
