int main()
{
	int m,a,b,i,j;
	scanf("%d",&m);
	if(m>=6&&m<=10000&&m%2==0)
	{
		for(a=2;a<=m;a++)
		{
			for(b=2;b<=m;b++)
			{
		if(a%2!=0&&b%2!=0&&a<=b)
		{
		if(m==a+b)
		{
			for(i=2;i<a;i++)
			{if(a%i==0){
				break;
			}
			}
			if(i==a){
                  for(j=2;j<b;j++)
			{if(b%j==0){
				break;
			}
			}
				  if(j==b){
					  printf("%d %d\n",a,b);}}
		}
		}
			}
		}
	}
		return 0;
}