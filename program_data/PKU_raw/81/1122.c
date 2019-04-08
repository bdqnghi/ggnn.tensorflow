int change(int a[5][5],int m,int n)
{int count,i;
	if(m<0||m>=5||n<0||n>=5)
		{
			printf("error");return 0;
		}
	for(count=0;count<5;count++)
		{
			if(count==n)
			{
				for(i=0;i<4;i++)
					printf("%d ",a[m][i]);
				printf("%d\n",a[m][4]);
			
			}
			else if(count==m)
			{
				for(i=0;i<4;i++)
					printf("%d ",a[n][i]);
				printf("%d\n",a[n][4]);
			
			}
			else 
			{
				for(i=0;i<4;i++)
					printf("%d ",a[count][i]);
				printf("%d\n",a[count][4]);
			
			}
		}return 1;
}
int main()
{
	int a[5][5],m,n,i,j,count=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
		scanf("%d%d",&m,&n);
	change(a,m,n);

	/*for(count=0;count<5;count++)
		{
			if(count==n)
			{
				for(i=0;i<4;i++)
					printf("%d ",a[m][i]);
				printf("%d\n",a[m][4]);
			
			}
			else if(count==m)
			{
				for(i=0;i<4;i++)
					printf("%d ",a[n][i]);
				printf("%d\n",a[n][4]);
			
			}
			else 
			{
				for(i=0;i<4;i++)
					printf("%d ",a[count][i]);
				printf("%d\n",a[count][4]);
			
			}
		}return 0;*/
}

