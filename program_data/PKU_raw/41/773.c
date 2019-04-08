
int main()
{
	int a[5],b[5],c[5];
	int i,sum,sum1;
	for(a[0]=1;a[0]<6;a[0]=a[0]+1)
	{
		for(a[1]=1;a[1]<6;a[1]=a[1]+1)
		{
			if(a[0]!=a[1])
			{
				for(a[2]=1;a[2]<6;a[2]=a[2]+1)
				{
					if(a[0]!=a[2]&&a[1]!=a[2])
					{
						for(a[3]=1;a[3]<6;a[3]=a[3]+1)
						{
							if(a[3]!=a[0]&&a[3]!=a[1]&&a[3]!=a[2])
							{
								for(a[4]=1;a[4]<6;a[4]=a[4]+1)
								{
									if(a[4]!=a[0]&&a[4]!=a[1]&&a[4]!=a[2]&&a[4]!=a[3]&&a[4]!=2&&a[4]!=3)
									{
										sum=0;
										sum1=0;
										b[0]=(a[4]==1);
										b[1]=(a[1]==2);
										b[2]=(a[0]==5);
										b[3]=(a[2]!=1);
										b[4]=(a[3]==1);
										for(i=0;i<5;i=i+1)
										{
											if(a[i]==1)
												sum=sum+b[i];
											if(a[i]==2)
												sum=sum+b[i];
											if(a[i]!=1&&a[i]!=2)
												sum1=sum1+b[i];
										}
										if(sum==2&&sum1==0)
										{
											for(i=0;i<5;i=i+1)
												c[i]=a[i];
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
	for(i=0;i<5;i=i+1)
		if(i!=4)
		cout<<c[i]<<' ';
		else
			cout<<c[i];
	return 0;
}