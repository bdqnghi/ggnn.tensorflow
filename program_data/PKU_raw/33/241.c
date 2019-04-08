int main()
{
    char zfc[N][N];
	int n;
	int cd[N];
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s",zfc[i]);
		cd[i]=strlen(zfc[i]);
	}
	int j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<cd[i];j++)
		{
		switch(zfc[i][j])
			{
				case'A':
					printf("%c",'T');
					break;
				case'T':
                    printf("%c",'A');
					break;
				case'C':
 					printf("%c",'G');
					break;
				case'G':
                    printf("%c",'C');
					break;
			}
			if(j==cd[i]-1)
			{
				printf("\n");
				break;
			}
		}
	}
	return 0;
}
