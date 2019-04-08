int main()
{
	int a,b,c,i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&c);
		if(i==0)
		{
			a=c;
			b=c;
		}
		else if(i==1)
		{
			if(c>=a)
			{
				a=c;
				b=b;
			}
			else
			{
				a=a;
				b=c;
			}

		}
		else
		{
			if(c>=a)
			{
				b=a;
				a=c;
			}
	    	else if(c<=b)
			{
				a=a;
				b=b;
			}
			else
			{
				a=a;
				b=c;
			}
		}
	}
        printf("%d\n",a);
        printf("%d\n",b);
		return 0;
}