
int main()
{
	int N,score1,score2,k,i,money[100],totalmoney=0,x,n;
	char name[100][20];
	char c,d;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		money[i]=0;
		scanf("%s %d %d %c %c %d",name[i],&score1,&score2,&c,&d,&k);
		if(score1>80&&k!=0)
		{
			money[i]=money[i]+8000;
		}
		if(score1>85&&score2>80)
		{
			money[i]=money[i]+4000;
		}
		if(score1>90)
		{
			money[i]=money[i]+2000;
		}
		if(score1>85&&d=='Y')
		{
			money[i]=money[i]+1000;
		}
		if(score2>80&&c=='Y')
		{
			money[i]=money[i]+850;
		}
	}
	x=money[0];
	n=0;
	for(i=0;i<N;i++)
	{
		totalmoney=totalmoney+money[i];
		if(money[i]>x)
		{
			x=money[i];
			if(i>n)
			{
				n=i;
			}

		}
	}
	printf("%s\n",name[n]);
	printf("%d\n",x);
    printf("%d\n",totalmoney);
	


	return 0;
}