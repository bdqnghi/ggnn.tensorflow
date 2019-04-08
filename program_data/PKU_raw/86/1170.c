int main()
{
	int time,i,n,broken,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&broken);
		if(broken==0)
		{
			printf("60\n");
		}
		else
		{
		int *num=(int*)malloc(sizeof(int)*broken);
		for(j=0;j<broken;j++)
		{
			scanf("%d",&num[j]);
		}
		for(j=broken-1;j>=0;j--)
		{
			time=num[j]+(j+1)*3;
			if(time<60)
			{
				printf("%d\n",60-(j+1)*3);
				break;
			}
			else if(time<63)
			{
				printf("%d\n",num[j]);
				break;
			}
		}
		free(num);
		}
	}
	return 0;
}
