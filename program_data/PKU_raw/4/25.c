
int main()
{
	int a[100][100],i,j,r,c,s;
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(s=0;s<r+c-1;s++)
	{
		for(i=0;i<=s;i++)
		{
			if(i<=r-1 && s-i<=c-1)
			{
				if(i==0 && s-i==0)
					printf("%d",a[0][0]);
				else
					printf("\n%d",a[i][s-i]);
			}
		}
	}
	printf("\n");
	return 0;
}