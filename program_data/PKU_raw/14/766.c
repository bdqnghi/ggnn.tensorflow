
int main(int argc, char* argv[])
{
    long n;
	long num[99999],math[99999],china[99999],z[99999],i;
	long num1=2,num2=1,num3=0,m1=0,m2=0,m3=0;
	scanf("%ld",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%ld",&num[i]);
		scanf("%ld",&math[i]);
		scanf("%ld",&china[i]);
		z[i]=math[i]+china[i];
		if(z[i]>num3)
		{
			num1=num2;
			m1=m2;
			num2=num3;
			m2=m3;
			num3=z[i];
			m3=i;
			
		}
		else if(z[i]>num2)
		{
			num1=num2;
			m1=m2;
			num2=z[i];
			m2=i;
		}
		else if(z[i]>num1)
		{
			num1=z[i];
			m1=i;
		}
	}
	printf("%ld %ld\n",m3,num3);
	printf("%ld %ld\n",m2,num2);
    printf("%ld %ld\n",m1,num1);
	return 0;
}