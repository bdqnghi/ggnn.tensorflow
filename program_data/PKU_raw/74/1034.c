int f(int x)
{
	int y=0,p;
	p=x;
	while(x!=0)
	{
		y=y*10+x%10;
		x=x/10;
	}
	if(p==y)return(1);
	else return(0);
}
int g(int x)
{
	int k,i;
	k=sqrt(x);
	for(i=2;i<=k;i++)
	{if(x%i==0)break;}
	if(i==k+1)return(1);
	else return(0);
}
void main()
{
	int m,n,i,a[300],r=0,k=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
		if(f(i)==1&&g(i)==1)
		{r++;a[r]=i;k=1;}
	if(k==0)printf("no");
		else
		{
			printf("%d",a[1]);
			for(i=2;i<=r;i++)
				printf(",%d",a[i]);
		}
}