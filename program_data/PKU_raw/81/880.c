
int main()
{
	int m,n,a[5][5],i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	scanf("%d %d",&m,&n);
	if(m==n||m>4||m<0||n>4||n<0)
		printf("error");
	else
		for(i=0;i<5;i++)
		{
			if(i==m)
					printf("%d",a[n][0]);
				else if(i==n)
					printf("%d",a[m][0]);
				else
					printf("%d",a[i][0]);
			for(j=1;j<5;j++)
			{
				if(i==m)
					printf(" %d",a[n][j]);
				else if(i==n)
					printf(" %d",a[m][j]);
				else
					printf(" %d",a[i][j]);
			}
			printf("\n");
		}
	return 0;
}

