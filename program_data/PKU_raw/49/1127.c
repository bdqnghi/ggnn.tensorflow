main()
{
	char a[500];
	int i,j,k;
	gets(a);
	for(i=2;i<=strlen(a);i++)
	{
		for(j=0;j<strlen(a)+1-i;j++)
		{
			for(k=0;j+k<=j+i-k-1;k++)
			{
				if(a[j+k]!=a[j+i-k-1])
				break;
			}
			if(j+k>j+i-k-1)
			{
				for(k=0;k<i;k++)
				printf("%c",a[j+k]);
				printf("\n");
			}		
		}
	}
}