void main()
{
	int n,i,j,k,f=0,g=0;
	scanf("%d",&n);
	for(i=3;i<n-1;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
			if(j==i-1&&i%j!=0)
			{
				for(k=2;k<i+2;k++)
				{
					if((i+2)%k==0)
						break;
					if(k==i+1&&(i+2)%k!=0)
					{
						printf("%d %d\n",i,i+2);
						f=1;
					}
				}
			}
		}
	}
	if(f==0)
		printf("empty\n");
}
