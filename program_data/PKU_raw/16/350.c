// 0001.cpp : Defines the entry point for the console application.
//

int main()
{
    int n,i,k,s;
	scanf("%d",&n);
	i=n;
	s=0;
	while(i>0)
	{
        k=i%10;
		if(k==0) printf("0"),i/=10;
		else
		{
		   i=i/10;
		   s=s*10+k;
        }
    }
	printf("%d\n",s);
	return 0;
}
