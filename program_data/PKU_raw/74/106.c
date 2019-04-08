int sushu(int n)
{
	int i,j,r;
	j=1;
	for(i=2;i<n&&j==1;i++)
	{
		if(n%i==0)
		{
			j=0;
			break;
		}
	}
	if(j==1)r=1;
	else r=0;
	return(r);
}
int huiwen(int n)
{
	int weishu;
	int i,j=1,r;
	for(i=0;j==1;i++)
	{
		if(n/(int)pow(10,i)==0)
		{
			j=0;
			break;
		}
	}
	weishu=i;
	int num[10];
	for(j=1;j<=weishu;j++)
		num[j]=(n%(int)pow(10,j)-n%(int)pow(10,(j-1)))/(int)pow(10,(j-1));
	int k=1;
	for(j=1;j<=weishu&&k==1;j++)
	{
		if(num[j]!=num[weishu-j+1])
		{
			k=0;
			break;
		}
	}
	if(k==1)r=1;
	else r=0;
	return(r);
}
void main(void)
{
	int m,n,num[100],i;
	for(i=0;i<100;i++)
		num[i]=-1;
	scanf("%d",&m);
	scanf("%d",&n);
	int l=0;
	for(i=m;i<=n;i++)
	{
		if((sushu(i)==1)&&(huiwen(i)==1))
		{
			num[l]=i;
			l++;
		}
	}
	if(num[0]==-1)printf("no\n");
	else if(num[1]==-1)printf("%d\n",num[0]);
	else
	{
		printf("%d",num[0]);
		for(i=1;i<l-1;i++)printf(",%d",num[i]);
		printf(",%d\n",num[l-1]);
	}
}