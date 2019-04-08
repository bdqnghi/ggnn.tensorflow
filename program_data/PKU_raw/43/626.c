int main()
{
	int n,i,j,k,a;
	double b;
		scanf("%d",&n);
	for(i=3;i<=2*n-1;i=i+2)
	{
		b=i;
		a=(int)sqrt(b)+1;
		for(k=2;k<a;k++)
		{
			if(i%k==0)
				break;
		}
		if(a==k)
			for(j=i;j<=n-i;j=j+2)
			{
				b=j;
				a=(int)sqrt(b)+1;
				for(k=2;k<a;k++)
				{
					if(j%k==0)
						break;
				}
				if(a==k)
					if(n==i+j)
						printf("%d %d\n",i,j);
			}
	}


	
	
	return 0;
}

