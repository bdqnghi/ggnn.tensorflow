int main()
{
	
	char a[10000]={0};
	int i,j,k, n,lenth,num=-1;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		lenth=strlen(a);
		for(j=0;j<lenth;j++)
			for(k=0;k<lenth;k++)
			{
				num=-1;
				if(j!=k&&a[j]==a[k])
					break;
				else if(j!=k&&k==lenth-1&&a[j]!=a[k])
				{
					num=j;
					j=lenth;
					break;
				}
				else if(j==lenth-1&&j!=k&&a[j]==a[k])
				{
					printf("no");
					break;
				}
				else if(j==lenth-1&&k==lenth-1)
				{
					num=lenth-1;
				}
			}
			if(num!=-1)
				printf("%c\n",a[num]);
			else
				printf("no\n");
			
			
			
	}
	return 0;
}