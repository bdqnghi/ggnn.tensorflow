/**/
isprime(int i)// ??i????,“?”?“?i”
{
	int j,flag=1;
	double k;
	k=sqrt(i);
	for(j=2;j<=k;j++)//????2???6?????????“2???”??
	{
		if(i%j==0)
		{
			flag=0;
			break;
		}
	}
		return flag;
}

int main()
{
	int n,i,c,a,b;
	scanf("%d",&n);
	for(c=6;c<=n;c+=2)
	{
		for(i=3;i<c;i++)
		{
			a=isprime(i);
			if(a==1)
			{
				//printf("a%d\n",a);
				b=c-i;
				//printf("b%d\n",b);
				int k;
				k=isprime(b);
				//printf("c%d\n",k);
				if(k==1)
					break;
			}
				
				
			
		}		
		printf("%d=%d+%d\n",c,i,b);

	}
	return 0;
}
