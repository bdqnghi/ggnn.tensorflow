int main()
{
	char a[50],b[50];
	int i,j,flag;
	scanf("%s %s",&a,&b);
	for(i=0;b[i]!=0;i++)
	{
		if (b[i]==a[0])
		{
			flag=0;
			for(j=0;a[j]!=0&&b[j]!=0;j++)
			{
				if (a[j]!=b[i+j])
				{
					flag=1;
					break;
				}
			}
			if(!flag) 
			{
				printf("%d\n",i);
				break;
			}
		}
	}
	return 0;
}