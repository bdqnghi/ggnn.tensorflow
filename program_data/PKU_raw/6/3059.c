int main()
{
	int k=0,x=0,y=0,temp=0,sum=0,i,j,m;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		sum=0;
		scanf("%d",&x);
		scanf("%d",&y);
		for(j=0;j<x;j++)
		{
			for(m=0;m<y;m++)
			{
				scanf("%d",&temp);
				if(j==0||m==0||j==x-1||m==y-1)
					sum=sum+temp;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
