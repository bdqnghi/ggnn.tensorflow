int panduan(int m)
{
	int k,i=0,j,s=0;
	int n;
	n=m;
	do
	{
		n=n/10;
		i++;
	}while(n>0);
	n=m;
	for(j=0;j<i;j++)
	{
		k=n%10;
		n=n/10;
		s=10*s+k;
	}

	if(m==s)
		return 1;
	else
		return 0;
}
int shushu(int m)
{
	int flag=0;
	int i,j;
	if(m==1)
		return 0;
	for(i=2;i<m;i++)
	{
		if(m%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		return 0;
	else
		return 1;
}

int main()
{
	int m,n,flag=0;
	scanf("%d%d",&m,&n);
	for(;m<=n;m++)
	{
		if(panduan(m)==1&&shushu(m)==1)
		{
			if(flag==0)
			{
				printf("%d",m);
				flag++;
			}
			else
			{
				printf(",%d",m);
				flag++;
			}
		}
	}
	if(flag==0)
	{
		printf("no");
	}
	return 0;
}
