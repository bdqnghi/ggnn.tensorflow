int runnian(int a)
{
	if((a%4==0&&a%100!=0)||a%400==0)
		return 1;
	else return 0;
}

void main()
{
	int n,i,j,y,m1,m2,result1=0,result2=0;
	int month[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		scanf("%d%d%d",&y,&m1,&m2);
		for(i=0;i<m1-1;i++)
			result1+=month[runnian(y)][i];
		for(i=0;i<m2-1;i++)
			result2+=month[runnian(y)][i];
		if(abs(result2-result1)%7==0)
			printf("YES\n");
		else printf("NO\n");
		result1=result2=0;
	}
}



