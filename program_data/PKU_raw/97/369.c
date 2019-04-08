int main()
{
	int n,i,j,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0;
	scanf("%d",&n);
	while(n!=0)
	{
		if(n-100>=0)
		{	
			sum1++;
		    n=n-100;
		}
		else if(n-50>=0 && n-50<50)
		{
			sum2++;
		    n=n-50;
		}
		else if(n-20>=0 && n-20<30)
		{
			sum3++;
		    n=n-20;
		}
		else if(n-10>=0 && n-10<10)
		{
			sum4++;
		    n=n-10;
		}
		else if(n-5>=0 && n-5<5)
		{
			sum5++;
		    n=n-5;
		}
		else if(n-1>=0 && n-1<4)
		{
			sum6++;
		    n=n-1;
		}
	}
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",sum1,sum2,sum3,sum4,sum5,sum6);
	return 0;
}


