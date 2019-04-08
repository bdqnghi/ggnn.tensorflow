
int main()
{
	int m,n,k,i,j,sum=0,flag=0,r,s,t,o,p,sum1=0;
	long a[100000],b[100000];
	scanf("%d %d",&m,&n);
	j=0;
	for(k=m;k<=n;k++)
	{
		for(i=2;i<k;i++)
		{
			if(k%i==0) break;
		}
		if(i==k)
		{
			a[j]=k;
			j++;
			sum++;
		}
	}
	j=0;

	for(i=0;i<sum;i++)
	{
		if(a[i]>=2&&a[i]<=9)
		{
			b[j]=a[i];
			j++;
			sum1++;
			flag=1;
		}
		
		if(a[i]>=100&&a[i]<=999)
		{
			for(r=0;r<=9;r++)
			{
				for(s=0;s<=9;s++)
				{
					for(t=0;t<=9;t++)
					{
						if(r*100+s*10+t==a[i])
						{
							if(r==t)
							{
							b[j]=a[i];
							j++;
							sum1++;
							flag=1;
							}
						}
					}
				}
			}
		
		}
		if(a[i]>=1000&&a[i]<=9999)
		{
			for(r=0;r<=9;r++)
			{
				for(s=0;s<=9;s++)
				{
					for(t=0;t<=9;t++)
					{
						for(o=0;o<=9;o++)
						{
						if(o*1000+r*100+s*10+t==a[i])
						{
							if(o==t&&r==s)
							{
							b[j]=a[i];
							j++;
							sum1++;
							flag=1;
							}
						}
					}
				}
			}
			}
		
		}
		if(a[i]>=10000&&a[i]<=99999)
		{
			for(o=0;o<=9;o++)
			{
				for(p=0;p<=9;p++)
				{
			for(r=0;r<=9;r++)
			{
				for(s=0;s<=9;s++)
				{
					for(t=0;t<=9;t++)
					{
						if(o*10000+p*1000+r*100+s*10+t==a[i])
						{
							if(o==t&&p==s)
							{
							b[j]=a[i];
							j++;
							sum1++;
							flag=1;
							}
						}
					}
				}
			}
				}
		
		}
		}
	}
	if(flag==0) printf("no");
	else
	{

	for(i=0;i<sum1;i++)
	{
		if(i==0) printf("%ld",b[i]);
		else
			printf(",%ld",b[i]);
	}
	}



	return 0;
}
