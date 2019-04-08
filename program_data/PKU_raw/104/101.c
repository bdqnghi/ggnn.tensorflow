int lujing(int a)
{
	int b,j,n;
	for(j=9;j>=0;j--)
	{
		if(a>=pow(2,j)&&a<pow(2,j+1))n=j;
	}
	b=(a-pow(2,j))/2+pow(2,j-1);
	return b;
}
void main()
{
	int x[10],y[10];
	int i,k,t;
	scanf("%d%d",&x[0],&y[0]);
	for(i=1;;i++)
	{
		x[i]=lujing(x[i-1]);
		if(x[i]==1)break;
	}
	for(k=1;;k++)
	{
		y[k]=lujing(y[k-1]);
		if(y[k]==1)break;
	}
	for(t=0;;t++)
	{
		if(x[i-t]==y[k-t]&&x[i-t-1]!=y[k-t-1])
		{
			printf("%d\n",x[i-t]);
			break;
		}
	}



}