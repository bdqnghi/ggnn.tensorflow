int sushu(int x)
{
	int ia,mk;
	mk=1;
	for(ia=2;ia<=x/2;ia++)
	{
		if(x%ia==0)
		{mk=0;break;}
	}
	return(mk);
}
int huiwen(int y)
{
	int a[100],n,m,z,i,b;
	n=1;m=0;i=1;
	while(n<=y)
	{n=10*n;m++;}
	for(i=1;i<=m;i++)
	{
		b=pow(10,m-i);
		a[i]=y/b;
		y=y%(int)pow(10,m-i);
	}
	z=1;
    for(i=1;i<=m;i++)
	if(a[i]!=a[m+1-i])
	{z=0;break;}
	return(z);
}
void main()
{
	int ma,na,j,t;
	scanf("%d%d",&ma,&na);
    t=0;
	for(j=ma;j<=na;j++)
	{
		if(sushu(j)==1&&huiwen(j)==1)
		{
			if(t>0)printf(",");
				printf("%d",j);
				t++;
		}
	}
	if(t==0)printf("no");
}
