
int main()
{
	int n,i,j;
	char a[50][20];
	int b[50];
	scanf("%d\n",&n);
	for(i=0;i<50;i++)
	{
		for(j=0;j<20;j++)
			a[i][j]='\0';
	}
	for(i=0;i<n;i++)
	{
		for(j=0;;j++)
		{
			scanf("%c",&a[i][j]);
			if(a[i][j]=='\n')
				break;
		}
		b[i]=j;
	}

	for(i=0;i<n;i++)
	{
			if(a[i][b[i]-1]=='r')
			{
				for(j=0;j<b[i]-2;j++)
                  printf("%c",a[i][j]);
				printf("\n");
			}
			else
			{
				if(a[i][b[i]-1]=='y')
				{
				    for(j=0;j<b[i]-2;j++)
                       printf("%c",a[i][j]);
				    printf("\n");
				}
				else
				 {
			          if(a[i][b[i]-1]=='g')
						{ 
				            for(j=0;j<b[i]-3;j++)
                              printf("%c",a[i][j]);
				            printf("\n");
						}
				 }
			}
	}
	return 0;
}