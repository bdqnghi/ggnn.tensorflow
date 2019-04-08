int fangfa(int m,int n)
{
	if(n==1)
		return 1;
	if(m>n)
		return(fangfa(m,n-1)+fangfa(m-n,n));
	else if(m==n)
		return(fangfa(m,n-1)+1);
	else
		return(fangfa(m,n-1));
}
void apple()
{
	int m=0,n=0;
	scanf("%d%d",&m,&n);
	printf("%d\n",fangfa(m,n));
}
void main()
{
	int t=0,i=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
		apple();
}