int main(int argc, char* argv[])
{
	int prime(int p);
	int n,i,k;
	scanf("%d",&n);
	for(i=6;i<=n;i++,i++)
	{
       for(k=3;k<n/2;k++,k++)
	   {
		   if(prime(k)+prime(i-k)==2)
		   {
			   printf("%d=%d+%d\n",i,k,i-k);
			   break;
		   }
	   }
	}
	return 0;
}

int prime(int p)
{
	int isprime=1;
	int j;
	if(p==3||p==5||p==7)
	{
		return isprime;
	}
	else 
	{
		for(j=3;j<=sqrt(p);j++,j++)
		{
			if(p%j==0)
			{
				isprime=0;
				return isprime;
				break;
			}
		}
	}
	return isprime;
}

