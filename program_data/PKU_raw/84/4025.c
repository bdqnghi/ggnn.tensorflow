int main()
{
	int len,e;
	scanf("%d",&len);
	int num[100];
	scanf("%d\n",&num[0]);
	for(int k=1;k<=2;k++)
	{
		for(int i=0;i<len-k;i++)
		{
			scanf("%d",&num[i+1]);
			if(num[i]>num[i+1])
			{
				e=num[i+1];
				num[i+1]=num[i];
				num[i]=e;
			}
		}
	}
	printf("%d\n%d\n",num[len-1],num[len-2]);
	return 0; 
}