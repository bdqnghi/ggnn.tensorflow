void main()
{
	int judge(int,int,int,int);
	int i,n,k;
	scanf("%d%d",&n,&k);
	if(n==1) printf("%d",k+1);
	else
	{
		for(i=n+k;;i++)
		{
			if(judge(n,i,n,k)==1) continue;
			printf("%d",i);
		    break;
		}
	}
}
int judge(int c,int d,int a,int b)
{
	int f;
    if(d==0) f=1;
	else if(c==0) f=2;
	else if((d-b)%a!=0) f=1;
	else if(judge(c-1,(d-b)*(a-1)/a,a,b)==1) f=1;
	else f=2;
	return(f);
}