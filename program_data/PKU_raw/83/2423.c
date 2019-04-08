int main(){
	int n,a[10],b[10],sum1=0;
	double gpa,sum2=0.0;
	scanf("%d",&n);
    for(int i=0;i<n;i++)
	{
	
		scanf("%d",&a[i]);
		sum1+=a[i];
	}
	for(int j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
		if(90<=b[j]&&b[j]<=100)
		{
			sum2+=a[j]*4.0;
		}
		else
		{
			if(85<=b[j]&&b[j]<=89)
			{
				sum2+=a[j]*3.7;
			}
			else
			{
				if(82<=b[j]&&b[j]<=84)
				{
					sum2+=a[j]*3.3;
				}
				else
				{
					if(78<=b[j]&&b[j]<=81)
					{
						sum2+=a[j]*3.0;
					}
					else
					{
						if(75<=b[j] &&b[j]<=77)
						{
							sum2+=a[j]*2.7;
						}
						else
						{
							if(72<=b[j]&&b[j]<=74)
							{
								sum2+=a[j]*2.3;
							}
							else
							{
								if(68<=b[j]&&b[j]<=71)
								{
									sum2+=a[j]*2.0;
								}
								else
								{
									if(64<=b[j]&&b[j]<=67)
									{
										sum2+=a[j]*1.5;
									}
									else
									{
										if(60<=b[j]&&b[j]<=63)
										{
											sum2+=a[j]*1.0;
										}
										else
										{
											sum2=sum2;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}


			
     
	
	gpa=sum2/sum1;
	printf("%.2lf",gpa);
	return 0;
}
