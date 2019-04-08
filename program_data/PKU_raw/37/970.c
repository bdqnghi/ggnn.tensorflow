int main()
{
	int t,i,k,m;
	char zfc[100001];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%s",zfc);
        for(k=0;zfc[k]!=0;k++)
		{
			for(m=0;zfc[m]!=0;m++)
			{
				if(zfc[m]==zfc[k]&&m!=k)
				{
					break;
				}
			}
			if(zfc[m]==0)
			{
				printf("%c\n",zfc[k]);
				break;
			}
		}
		if(zfc[k]==0)
		{
			printf("no\n");
		}
	}
	return 0;
}