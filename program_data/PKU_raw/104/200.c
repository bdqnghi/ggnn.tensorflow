
void main()
{
	int i,j,m,n;
	int x[12]={0},y[12]={0};
	scanf("%d %d",&x[0],&y[0]);
	if(x[0]==1||y[0]==0)
		printf("1\n");
	else{
	for(i=1;;i++)
	{
		x[i]=x[i-1]/2;
		if(x[i]==1)
		{
			m=i;
			break;
		}
	}
	for(j=1;;j++)
	{
		y[j]=y[j-1]/2;
		if(y[j]==1)
		{
			n=j;
			break;
		}
	}
	for(i=m,j=n;i>=0,j>=0;i--,j--)
	{
		if(x[i]==y[j])
			if(i==0||j==0||x[i-1]!=y[j-1])
				printf("%d\n",x[i]);
			else
				continue;
		else
			break;
	}
	}
}