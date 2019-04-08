// ?????.cpp : ??????????????
//



int main()
{//declaration
	short apple(int m,int n);
	int t,m,n,k[20];
	int i;
//input process
	scanf("%d",&t);
	for(i=0;i<=t-1;i++)
	{
		scanf("%d%d",&m,&n);
		k[i]=apple(m,n);
	
	}
//output
	for(i=0;i<=t-1;i++)printf("%d\n",k[i]);

	return 0;
}

short apple(int m,int n)
{
	short res=0;
	if(m<=1||n<=1)res=1;
	else
	{ 
		if(m>=n)res=apple(m-n,n);
		res=res+apple(m,n-1);
	}
	return res;

}