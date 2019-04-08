int main()
{
	int zhishu(int x);
	int inttostr(int y);
	int m,n,i,num[100]={0},v=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(zhishu(i)==1)
		{
			if(inttostr(i)==1)
			{
				num[v++]=i;
			}
		}
	}
	if(num[0]==0)
	{
		printf("no");
		return 0;
	}
	for(i=0;i<v;i++)
	{
		if(i==0)
		{
			printf("%d",num[i]);
		}
		else
		{
			printf(",%d",num[i]);
		}
	}
	return 0;
}

int zhishu(int x)
{
	int k=0,j;
	for(j=2;j<x;j++)
	{
		if((x%j)==0)
		{
           return(0);
		}
		else
		{
			k=k+1;
		}
	}
	if(k==j-2)
	{
		return(1);
	}
}

int inttostr(int y)
{
	int data[8],t,l,q=0;
	for(t=0;y>0;t++)
	{
		data[t]=y%10;
		y=y/10;
	}
	l=t;
	for(t=0;t<l;t++)
	{
		if(data[t]!=data[l-1-t])
		{
			return(0);
		}
		else
		{
			q=q+1;
		}
	}
	if(q==l)
	{
		return(1);
	}
}

	

	


