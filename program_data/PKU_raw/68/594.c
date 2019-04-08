int panduan(int x)
{
	int i,j;
	if(x>3)
		for(i=2;i<=sqrt(x);i++)
			if(x%i==0)
			{
				j=1;
				break;
			}
			else j=0;
	if(x<=3)
		j=0;
	if(j==0)
		return (x);
	else return 0;
}
int main()
{
	int n,a,b,i,j;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{
		printf("%d=",i);
		for(j=2;j<=n;j++)
		{
			int s,t;
			s=j;t=i-j;
			if((panduan(s)!=0)&&(panduan(t)!=0))
			{
				printf("%d+%d\n",s,t);
				break;
			}
		}
	}
	return 0;
}
