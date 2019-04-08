int main()
{
	int i,n,k1,k2,sum1=0,sum2=0,sum3=0,sum4=0,sum=0;
	scanf("%d",&n);
	if(n>=100) printf("error\n");
	else
	{
		for(i=1;i<=n;i++)
		{
			sum4=(int)(sum4+pow(i,2));
			if(i%7==0) sum1=(int)(sum1+pow(i,2));
			else
			{
				k1=i%10;
				if(k1==7) sum2=(int)(sum2+pow(i,2));
				else
				{
					k2=(i%100)/10;
					if(k2==7) sum3=(int)(sum3+pow(i,2));
				}
			}
		}
	}
	sum=sum4-(sum1+sum2+sum3);
	printf("%d\n",sum);
	return 0;
}
