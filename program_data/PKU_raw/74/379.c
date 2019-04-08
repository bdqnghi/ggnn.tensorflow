int huiwen(int a)
{
	int b[100],i,j,k;
	for(i=0;;)
	{
		if(a==0)break;
		else 
		{
			b[i]=a%10;
			a=a/10;
			i++;
		}
	}
	for(j=0;j<i;j++)if(b[j]!=b[i-1-j])break;
	if(j==i)return(1);
	else return(0);
}
int sushu(int a)
{
	int i,j;
	for(i=2;i<a;i++)if(a%i==0)break;
	if(i==a)return(1);
	else return(0);
}
void main()
{
	int m,n,i,j,t1,t2;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		t1=huiwen(i);
		t2=sushu(i);
		if(t1==1&&t2==1)
		{printf("%d",i);break;}
	}
	if(i==n+1)printf("no");
	else for(j=i+1;j<=n;j++)
	{
		t1=huiwen(j);
		t2=sushu(j);
		if(t1==1&&t2==1)printf(",%d",j);
	}
}
