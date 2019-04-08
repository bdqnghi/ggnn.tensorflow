int huiwen(int i)
{
	int temp=i,k,n=0;
	while(temp>0)
	{ 
		k=temp%10;
		n=n*10+k;
		temp=temp/10;
	}
	if(n==i)
		return(0);
	else 
		return(1);
}
int zhishu(int i)
{
	int j,s=0;
	if(i==2 || i==3) return(0);
	for(j=2;(j*j)<=i;j++)
	{
		if(i%j==0) s++;
	}
	if(s==0) return(0);
	else return(1);

}
void main()
{
	int m,n;
	int x[100];
	scanf("%d%d",&m,&n);
	int i,k=0;
	for(i=m;i<=n;i++)
	{
		if(huiwen(i)==0 && zhishu(i)==0)
		{
			x[k]=i;
			k++;
		}
	}
	if(k==0) printf("no\n");
	else
		for(i=0;i<k;i++)
		{
			if(i!=k-1)
				printf("%d,",x[i]);
			else
				printf("%d\n",x[i]);
		}
}
