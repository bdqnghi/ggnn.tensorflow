int main()
{
	int n,i,t;
	char zfc[100][21];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",zfc[i]);
		for(t=0;zfc[i][t]!=0;t++)
		{
			if(zfc[i][t]<'0'||(zfc[i][t]>'9'&&zfc[i][t]<'A')||(zfc[i][t]>'Z'&&zfc[i][t]<'_')||(zfc[i][t]>'_'&&zfc[i][t]<'a')||zfc[i][t]>'z')
			{
				printf("no\n");
				break;
			}
			else if(zfc[i][0]>='0'&&zfc[i][0]<='9')
			{
                printf("no\n");
				break;
			}
		}
		if(zfc[i][t]==0)
		{
			printf("yes\n");
		}
	}
	return 0;
}
	