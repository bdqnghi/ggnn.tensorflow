int judge_p(int m)
{
	int i;
	for(i=2;i<m;i++)
	{
		if(!(m%i))
			break;
	}
	if(i==m)
		return 1;
	else
		return 0;
}
int judge_h(int m)
{
	int i,n=0,t=m;
	while(m)
	{
		n=n*10+m%10;
		m=(m-m%10)/10;
	}
	if(t==n)
		return 1;
	else
		return 0;
}
void main()
{
	int m,n,i,j=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
        if(judge_p(i)&&judge_h(i)&&j)
			printf(",%d",i);
		if(judge_p(i)&&judge_h(i)&&!j)
		{
			printf("%d",i);
			j++;
		}
	}
	if(!j)
		printf("no");
}