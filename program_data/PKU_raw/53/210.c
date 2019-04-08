

int main()
{
	int num[300],copy[300],sNum,i,count=0,j,flag=0;
	scanf("%d",&sNum);
	for (i=0;i<sNum; i++)
	{
		flag=0;
		scanf("%d", &num[i]);
		for (j=0;j<i;j++)
		{
			if (num[i]==copy[j])
			{
				flag=1;
				break;
			}
		}
        if (flag==0)
			{
				copy[count]=num[i];
				count++;
			}
	}

	for(j=0;j<count;j++)
	{
		printf("%d",copy[j]);
		if (j<count-1)
			printf(",");
	}
printf("\n");
return 0;
}
