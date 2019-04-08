int main()
{
	int n,i,s=0;
	int a[11],b[11];
	float x=0,GPA,c[11];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	scanf("%d",&b[i]);
	for(i=1;i<=n;i++)
	{
		s=s+a[i];
		if(b[i]>=90)
			c[i]=4.0;
		else
		{
			if((b[i]>=85)&&(b[i]<=89))
				c[i]=3.7;
			else
			{
			 if((b[i]>=82)&&(b[i]<=84))
				 c[i]=3.3;
			 else
			 {
			    if((b[i]>=78)&&(b[i]<=81))
					c[i]=3.0;
				else
				{
					if((b[i]>=75)&&(b[i]<=77))
						c[i]=2.7;
					else
					{
						if((b[i]>=72)&&(b[i]<=74))
					    c[i]=2.3;
						else
						{
							if((b[i]>=68)&&(b[i]<=71))
								c[i]=2.0;
							else
							{
								if((b[i]>=64)&&(b[i]<=67))
									c[i]=1.5;
								else
								{
									if((b[i]>=60)&&(b[i]<=63))
										c[i]=1.0;
									else
										c[i]=0;
								}}}}}}}}
		x=x+(c[i]*a[i]);
	}
	GPA=x/s;
	printf("%.2f",GPA);
	return 0;
}