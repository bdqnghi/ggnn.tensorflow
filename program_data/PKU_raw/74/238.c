int sig[1000]={0};
int len(int i)
{
	int j;
	for(j=0;;j++)
	{
		if(pow(10,j)-i>0)break;
	}
	//printf("%d,",j);
	return(j);
}
int rev(int i,int x)
{
	int j,num[100]={0},n=0;
	for(j=1;j<=x;j++)
	{
		num[j]=i%10;
		i=i/10;
	}
	for(j=1;j<=x;j++)
		//printf("%d,",num[j]);
	for(j=1;j<=x;j++)
		if(num[j]==num[x+1-j])n++;
	if(n==x)
	{
		//printf("1,");
		return(1);
	}
	else 
	{
		//printf("0,");
		return(0);
	}
}
int s(int i)
{
	int j,n=0;
	for(j=2;j<i;j++)
		if(i%j==0)
		{
			n++;
		}
	if(n==0)return(1);
	else return(0);
}
void main()
{
	int sig=0,n,m,x,y,z,i;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		y=z=0;
		x=len(i);
		y=rev(i,x);
		z=s(i);
		if(y+z==2)
		{
			sig++;
			if(sig==1)printf("%d",i);
			else printf(",%d",i);
		}
	}
	if(sig==0)printf("no");
}