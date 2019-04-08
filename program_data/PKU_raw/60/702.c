int main()
{
	int n,i,j,k,num=0;
	scanf("%d",&n);
	for(i=3;i<n-1;i=i+2)
	{
		for(j=3;j<sqrt(i);j=j+2)
		{
		    if(i%j==0)
				break;
		}
		if(j>sqrt(i))
		{
			for(k=3;k<sqrt(i+2);k=k+2)
			{
				if((i+2)%k==0)
					break;
			}
			if(k>sqrt(i+2))
			{
				printf("%d %d\n",i,i+2);
				
				num++;
			}
		}
	}
	if(num==0)
		printf("empty");
	return 0;
}
