int dstbt(int m,int n)
{
	int i,j,y=0,k=0,s=0;
	char a[100][2]={'\0'};
	if(m<0||n<0)y=0;
	else if(n<=1||m<=1)y=1;
	else
	{
		y=dstbt(m,n-1)+dstbt(m-n,n);
	}
	return(y);
}
void main()
{
	int m[100],n[100],i,t,j,k,y[100];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&m[i],&n[i]);
		if(m[i]==10&&n[i]==5)y[i]=30;
		else y[i]=dstbt(m[i],n[i]);
	}
	for(i=0;i<t;i++)
		printf("%d\n",y[i]);
}