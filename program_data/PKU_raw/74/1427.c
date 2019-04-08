int judge1(int m)//???????
{
	double a=sqrt((double)m);
	int b=((int)a)+1;
	int i;
	for(i=2;i<=b;i++)
	{if(m%i==0) break;}
	if(i==b+1) return(1);
	else return(0);
}
int judge2(int m)//????????
{
	int num[20],p,q,i,n;
	for(i=1;i<=19;i++)
	{num[i]=11;}
	q=m;
	i=1;
	while(q!=0)
	{
		p=q%10;
		q=(q-p)/10;
		num[i]=p;
		i=i+1;
	}
	for(i=1;i<=19;i++)
	{if(num[i]==11) break;}
	n=i-1;
	for(i=1;i<=n;i++)
	{if(num[i]!=num[n+1-i]) break;}
	if(i==n+1) return(1);
	else return(0);
}
int main()
{
	int m,n,i,b=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{if(judge1(i)==1&&judge2(i)==1) {printf("%d",i);b=1;break;}}
	if(b==1)
	{
	i=i+1;
	while(i<=n)
	{
		if(judge1(i)==1&&judge2(i)==1) printf(",%d",i);
		i=i+1;
	}
	}
	else printf("no");
	return 0;
}