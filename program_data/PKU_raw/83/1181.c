float jd(int s)
{
	float m;
	if (s>=90&&s<=100)
		m=4.0;
	else
	{
		if (s>=85&&s<=89)
			m=3.7;
		else
		{
			if (s>=82&&s<=84)
				m=3.3;
			else
			{
				if (s>=78&&s<=81)
					m=3.0;
				else
				{
					if (s>=75&&s<=77)
						m=2.7;
					else
					{
						if (s>=72&&s<=74)
							m=2.3;
						else
						{
							if (s>=68&&s<=71)
								m=2.0;
							else
							{
								if (s>=64&&s<=67)
									m=1.5;
								else
								{
									if (s>=60&&s<=63)
										m=1.0;
									else
									{
										if (s<60)
											m=0.0;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return (m);
}

void main()
{
	int i,n,sum=0;
	float x=0;
	int xf[10],cj[10];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&xf[i]);
		sum=sum+xf[i];
	}
	for (i=0;i<n;i++)
	{
		scanf("%d",&cj[i]);
		x=x+xf[i]*jd(cj[i]);
	}

	x=x/sum;
	printf("%.2f",x);
}
