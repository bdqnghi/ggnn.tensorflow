int judge(int x,int y,int z)
{
	int k,take,i,n,j,re;
	double left;
	take=x;k=y;n=z;
	left=take*n*1.0+k;
	for(i=0;i<n-1;i++)
	{
		left=left*1.0*(n/(n-1.0))+k;
		j=left;
		if(left-j>0)
		{
			re=0;
			break;
		}
	re=left;

	}
	return re;
}
void monkey(int x,int y)
{
	int n,k,i,m,a=0,j;
	double haha;
	n=x;k=y; 
	for(i=k;;i++)
	{
		
		j=judge(i,k,n);
		if(j==0)
		{
		
			j=j;
		}
		else
		{
			printf("%d",j);
		break;
		}
	}

}

int main()
{
int n,k;

scanf("%d",&n);
scanf("%d",&k);

monkey(n,k);
return 0;
}
