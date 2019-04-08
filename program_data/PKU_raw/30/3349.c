int main()
{
	int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	    {
		if(i%7==0)
		   continue;
		else
		   if(i%10==7||i/10==7)
		   continue;
		   else
		   sum+=i*i;  	
		}
		printf("%d",sum);
} 