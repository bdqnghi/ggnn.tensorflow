int main()
{
	int num,len;
	int max1=0,max2=0;
	int tmp,i;
	scanf("%d",&len);
	for (i = 1;i<=len;i++)
	{
		scanf("%d",&num);
		if(num>max1)
		{
			tmp=num;
			num=max1;
			max1=tmp;
			if (num>max2)
			{
				tmp=num;
				num=max2;
				max2=tmp;
			}
		}
		if(max1>num&&num>max2)
		{
			tmp=num;
			num=max2;
			max2=tmp;
		}
		
	}
	printf("%d\n%d\n",max1,max2);
	return 0;
}