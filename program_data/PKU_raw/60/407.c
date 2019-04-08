int main()
{
	int n;
	int a[10000];
	int i,j=1,k,m;
	a[1]=3;
	scanf("%d",&n);
	if(n>=7)
	{
		printf("3 5\n");
		for(i=5;i<=n-2;i=i+2)
		{
			for(k=1;k<=j;k++)
			{
				if(i%a[k]==0)
					break;
			}
			if(k==j+1)
			{
				j+=1;
				a[j]=i;
				for(m=1;m<=j;m++)
				{
					if((i+2)%a[m]==0)
					break;	
				}
				if(m==j+1)
				{
					printf("%d %d\n",i,i+2);
				}
			}
		}
	}
	else if(n==5 || n==6)
		printf("3 5\n");
	else
		printf("empty");
	return 0;

}