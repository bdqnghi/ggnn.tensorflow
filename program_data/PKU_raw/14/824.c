
int main(int argc, char* argv[])
{
    int n,num,math,china,z,i;
	int num1=2,num2=1,num3=0,m1=0,m2=0,m3=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num);
		scanf("%d",&math);
		scanf("%d",&china);
		z=math+china;
		if(z>num3)
		{
			num1=num2;
			m1=m2;
			num2=num3;
			m2=m3;
			num3=z;
			m3=i;
			
		}
		else if(z>num2)
		{
			num1=num2;
			m1=m2;
			num2=z;
			m2=i;
		}
		else if(z>num1)
		{
			num1=z;
			m1=i;
		}
	}
	printf("%ld %ld\n",m3,num3);
	printf("%ld %ld\n",m2,num2);
    printf("%ld %ld\n",m1,num1);
	return 0;
}
