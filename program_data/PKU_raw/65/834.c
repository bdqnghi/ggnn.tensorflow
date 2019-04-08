int main()
{
	int n,a=0,b=0;
	scanf("%d",&n);
	int num[n][2];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i][0]);
		scanf("%d",&num[i][1]);
	}
	for(int i=0;i<n;i++)
	{
		if(num[i][1]-num[i][0]==1||num[i][0]-num[i][1]==2)
		{
			a++;
		}
		if(num[i][0]-num[i][1]==1||num[i][1]-num[i][0]==2)
		{
			b++;
		}
	}
	if(a>b)
	{printf("A");}
	if(a==b)
	{printf("Tie");}
	if(b>a)
	{printf("B");}
	return 0;
}                                                                                                                                                      



