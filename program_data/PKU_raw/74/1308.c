void main()
{
	int m,n,i,p=0,pj=0;
	int reverse(int i,int j);
	int s(int i,int j);
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(i==reverse(i,0))
			if(s(i,2)==1)
			{
				pj=1;
				if(p==0)
				{
					printf("%d",i);
					p=1;
				}
				else printf(",%d",i);
			}
	}
         if(pj==0) printf("no");
}
int reverse(int i,int j)
{
	int a,k;
	if(i==0) a=j;
	else
	{
		k=i%10;
		a=reverse(i/10,j*10+k);
	}
	return(a);
}
int s(int i,int j)
{
	int a,k;
	k=sqrt(i);
	if(i==1) a=0;
	else if(i==j) a=1;
	else
	{
		if(i%j==0) a=0;
		else a=s(i,j+1);
	}
	return(a);
}