void main(){
	int x,y;
	scanf("%d%d",&x,&y);
	int i,m,n;
	for(i=0;i<10;i++)
	{
		if(pow(2.0,i)<=x&&x<=pow(2.0,i+1)-1)
		{
			m=i;
			i=11;
		}
	}
	for(i=0;i<10;i++)
	{
		if(pow(2.0,i)<=y&&y<=pow(2.0,i+1)-1)
		{
			n=i;
			i=11;
		}
	}
	if(m>n)
	{
		for(i=1;i<=m-n;i++)
		{
			if(x/2*2==x) x=x/2;
			else x=(x-1)/2;
		}
	}
	if(n>m)
	{
		for(i=1;i<=n-m;i++)
		{
			if(y/2*2==y) y=y/2;
			else y=(y-1)/2;
		}
	}
	int f(int x,int y);
	printf("%d",f(x,y));
}

int f(int x,int y)
{
	int z;
	if(x==y) {z=x;return z;}
	else if(x/2*2==x&&y/2*2==y)
	{
		x=x/2;
		y=y/2;
		z=f(x,y);
	}
	else if(x/2*2!=x&&y/2*2!=y)
	{
		x=(x-1)/2;
		y=(y-1)/2;
		z=f(x,y);
	}
	else if(x/2*2!=x&&y/2*2==y)
	{
		x=(x-1)/2;
		y=y/2;
		z=f(x,y);
	}
	else if(x/2*2==x&&y/2*2!=y)
	{
		x=x/2;
		y=(y-1)/2;
		z=f(x,y);
	}
}