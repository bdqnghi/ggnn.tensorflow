int main()
{
    int n,i,j;
	scanf("%d",&n);
	int length[1000];
	char a[1000][20];
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		length[i]=strlen(a[i]);
	}
    for(i=0;i<n;i++)
	{
		if(a[i][0]>=48&&a[i][0]<=57)
		{
			printf("no");
			
		}
		else 
		{
			for(j=0;j<20;j++)
			{
				if(a[i][j]<48)
				{
					break;
				}
				else if(a[i][j]>=58&&a[i][j]<=64)
				{
					break;
				}
				else if(a[i][j]>=91&&a[i][j]<=94 ||a[i][j]==96)
				{
					break;
				}
				else if(a[i][j]>=123&&a[i][j]<=126)
				{
					break;
				}			

			}
			if(j>=length[i])
			{
				printf("yes");
			}
			else
			{
				printf("no");
			}
			printf("\n");
			
		}
		printf("\n");
	}	
	return 0;
}