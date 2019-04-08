int judge_output(int n,int k, int j,int a1)
{
	int tp,out;
	if(j==1)
		return a1;
	else if(judge_output(n,k,j-1,a1))
	{
		tp=judge_output(n,k,j-1,a1);
		if(!(tp%(n-1)))
		{
			out=n*tp/(n-1)+k;
			return out;
		}
		else
			return 0;
	}
	else
		return 0;
}
void main()
{
	int n,k,i,tp=0;
	scanf("%d%d",&n,&k);
	for(i=1;;i++)
	{
		tp=judge_output(n,k,(n+1),i);
		if(tp)
		{
			printf("%d",tp);
			break;
		}
	}
}