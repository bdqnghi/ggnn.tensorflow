
void main()
{
	int i,j,len,k;
	char str[6][7];
	for(i=0;i<6;i++)
		scanf("%s",str[i]);
	for(i=0;i<6;i++)
	{
		if(atoi(str[i])>0)
		{
			len=strlen(str[i]);
			for(j=len-1;j>=0;j--)
			{
				if(str[i][j]!='0')
					break;
			}
			for(k=j;k>=0;k--)
				printf("%c",str[i][k]);
			printf("\n");
		}
		else if(atoi(str[i])<0)
		{
			printf("-");
			len=strlen(str[i]);
			for(j=len-1;j>=0;j--)
			{
				if(str[i][j]!='0')
					break;
			}
			for(k=j;k>=1;k--)
				printf("%c",str[i][k]);
			printf("\n");
		}
		else if(atoi(str[i])==0)
			printf("0\n");
	}
}
