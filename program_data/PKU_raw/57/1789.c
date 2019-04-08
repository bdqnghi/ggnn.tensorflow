int main()
{
	int n,i,len;
	char zfc[50];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		int j;
		scanf("%s",zfc);
		len=strlen(zfc);
		if((zfc[len-2]=='e')&&(zfc[len-1]=='r'))
		{
			for(j=0;j<len-3;j++)
			{
				printf("%c",zfc[j]);
			}
			for(j=len-3;j<len-2;j++)
			{
				printf("%c\n",zfc[j]);
			}
		}
		else if((zfc[len-2]=='l')&&(zfc[len-1]=='y'))
		{
			for(j=0;j<len-3;j++)
			{
				printf("%c",zfc[j]);
			}
			for(j=len-3;j<len-2;j++)
			{
				printf("%c\n",zfc[j]);
			}
		}
		else if((zfc[len-3]=='i')&&(zfc[len-2]=='n')&&(zfc[len-1]=='g'))
		{
			for(j=0;j<len-4;j++)
			{
				printf("%c",zfc[j]);
			}
			for(j=len-4;j<len-3;j++)
			{
				printf("%c\n",zfc[j]);
			}
			
		}
	}
	return 0;
}