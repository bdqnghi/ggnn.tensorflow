int zhi(int);
int hui(int);
void main()
{
	int m,n,p,w=0;
	scanf("%d%d",&m,&n);
	for(p=m;p<=n;p++)
		if(zhi(p)&&hui(p))
		{
			if(w==0)printf("%d",p),w++;
			else printf(",%d",p);
		}
	if(w==0)printf("no");
	putchar('\n');
}
int zhi(int p)
{
	int i,z=0;
	if(p==1)z=0;
	else if(p==2)z=1;
	else
	{
		for(i=2;i<=p;i++)
			if(p%i==0)break;
		if(p==i)z=1;
	}
	return z;
}
int hui(int p)
{
	int n=p,sum=0;
	while(n/10>0)
	{
		sum=sum*10+n%10;
		n/=10;
	}
	sum=sum*10+n;
	if(sum==p)return(1);
	else return(0);
}