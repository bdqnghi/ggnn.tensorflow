int main()
{
	int n,i,j,j1,k1,k,m;
	int flagj=1,flagk=1;
	scanf("%d",&n);
	for(i=6;i<=n;i+=2)
	{
		for(j=3;j<=i/2;j+=2)
		{
			flagj=1;
			flagk=1;
			k=i-j;
			j1=sqrt(j);
			k1=sqrt(k);
			for(m=2;m<=j1;m++)
				if(j%m==0)
				{
					flagj=0;
					break;	
				}
			for(m=2;m<=k1;m++)
				if(k%m==0)
				{
					flagk=0;
					break;	
				}
			if(flagj&&flagk)
			{
				printf("%d=%d+%d\n",i,j,k);
				break;
			}
		}
	}
}