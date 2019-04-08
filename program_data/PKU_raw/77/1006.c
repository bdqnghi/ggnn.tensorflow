
int main()
{
	char a[101]={0};
	scanf("%s",a);
	int i;
	int count=0;
	for(i=0;i<101;i++)
	{
		if(a[i]!=0)
			count++;
	}
	if(count==2)
		printf("0 1");
	else
	{
		int j=0;
		int b[50]={0};
		for(i=0;i<count;i++)
		{
			if(a[i]==a[count-1])
			{
				b[j]=i;
				j++;
			}
		}
		for(i=0;i<count/2;i++)
		{
			for(j=b[i]-1;j>=0;j--)
			{
				if(a[j]==a[0])
				{
					printf("%d %d\n",j,b[i]);
					a[j]=48;
					break;
				}
			}
		}
	}
	return 0;
}