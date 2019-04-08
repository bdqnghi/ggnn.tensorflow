void main()
{
	int i,j,k,x,m;
	scanf("%d",&x);
	for(i=6;i<=x;i++,i++)
	{
		for(j=3;j<=x;j++,j++)
		{
			for(m=2;m<=sqrt(j);m++)
				if(j%m==0)
					break;
			if (m>sqrt(j))
			{
				for(k=2;k<=sqrt(i-j);k++)
				{
					if((i-j)%k==0) 
					break;
				}
			    if(k>sqrt(i-j))
			        break;
			}
		}
		printf("%d=%d+%d\n",i,j,i-j);
	}
}

