int main()
{
	int a;
	int big1,big2,big;
	scanf("%d",&a);
	int b[100];
	scanf("%d",&b[0]);
	big1=b[0];
	scanf("%d",&b[1]);
	big2=b[1];
	if (big2>big1) 
	{
		big=big1;
		big1=big2;
		big2=big;
	}
	for (int i=2;i<=a-1;i++)
	{
		scanf("%d",&b[i]);
		if(b[i]>big2)
		{
			big2=b[i];
			if (big2>big1) 
			{
			big=big1;
			big1=big2;
			big2=big;
			}
		}
	}
	printf("%d\n%d\n",big1,big2);
	return 0;
}
