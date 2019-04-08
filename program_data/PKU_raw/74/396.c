int pdhw(int i);
int pdss(int i);
void main()
{
	int m,n,cs=0,h,s,i;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		h=pdhw(i);
		if(h==1)
		{
			s=pdss(i);
			if(s==1)
			{
				if(cs>0)
					printf(",");
				printf("%d",i);
				cs++;
			}
		}
	}
	if(cs==0)
		printf("no");
}
int pdhw(int i)
{
	int d=1,f=0,j=0,k,w,v=0,b[100]={0};
	do
	{
		d=d*10;
		f=i/d;
		j++;
	}
	while(f!=0);
	w=i;
	for(k=0;k<j;k++)
	{
		b[k]=w%10;
		w=w/10;
	}
	for(k=0;k<j;k++)
	{
		v=v*10+b[k];
	}
	if(v==i) 
		return(1);
	else return(0);
}
int pdss(int i)
{
	int j,r=0;
	for(j=2;j<=sqrt(i);j++)
	{
		if(i%j==0)
		{
			r=1;
			break;
		}
	}
	if(r==0)
		return(1);
	else return(0);
}