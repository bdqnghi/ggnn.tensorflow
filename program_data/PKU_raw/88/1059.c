int main()
{
	char zfc[100];
	gets(zfc);
	int i,k;
	for(i=0;zfc[i]!=0;i++)
	{
		if(zfc[i]>='0'&&zfc[i]<='9')
		{
			for(k=i;zfc[k]!=0;k++)
			{
				if(!(zfc[k+1]>='0'&&zfc[k+1]<='9'))
				{
					break;
				}
			}
		    for(i=i;i<=k;i++)
			{
			    printf("%c",zfc[i]);
			}
			printf("\n");
		}
	}
	return 0;
}