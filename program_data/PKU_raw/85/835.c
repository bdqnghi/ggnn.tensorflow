void main()
{
	int n,i,j;
	int len,flag;
	char zfc[X];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",zfc);
		len=strlen(zfc);
		flag=1;
		for(j=1;j<len;j++)
		{	
			if(zfc[0]>='a' && zfc[0]<='z' || zfc[0]>='A' && zfc[0]<='Z' || zfc[0]=='_');
			else
			{
				printf("no\n");
				flag=0;
				break;
			}
			if(zfc[j]>='0' && zfc[j]<='9' || zfc[j]>='a' && zfc[j]<='z' || zfc[j]>='A' && zfc[j]<='Z'|| zfc[j]=='_');
			else
				{
					printf("no\n");
					flag=0;
					break;
				}
		}
		if(flag==1)
			printf("yes\n");

	}
}
