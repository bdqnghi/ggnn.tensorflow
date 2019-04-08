int main()
{
	int n,i,j;
	int a[6]={100,50,20,10,5,1},s[6]={0};
	scanf("%d",&n);
	for(i=0;i<60;i++)
	{
		for(j=0;j<10;j++)
		{
			if(n-a[i]>=0)
			{
				n=n-a[i];
				s[i]+=1;
			}
		}
	}
	for(i=0;i<6;i++)
	{
		printf("%d\n",s[i]);
	}
	return 0;
}