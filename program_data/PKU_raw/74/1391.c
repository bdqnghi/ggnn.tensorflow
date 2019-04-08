int funa(int x);
int funb(int y);
int main()
{
	int m,n,i,k=0;
	int a[100]={0};
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(funb(i)==1)
			if(funa(i)==1)
			{
		    	a[k]=i;
		    	k++;
			}
	} 
	if(a[0]==0) printf("no\n");
		else
		{
			printf("%d",a[0]);
			for(i=1;a[i]!=0;i++)
			{
				printf(",%d",a[i]);
			}
		}
	return 0;
}

int funa(int x)
{
	int j;
	for(j=2;j<x;j++)
	{
		if(x%j==0) break;
	}
	if(j==x) return 1;
	else return 0;
}
int funb(int y)
{
	int temp,a,n;
	temp=y;
	n=0;
	while(temp>0)
	{
		a=temp%10;
		n=n*10+a;
		temp=temp/10;
	}
	if(n==y) return 1;
	else return 0;
}
