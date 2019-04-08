
int main(int argc, char* argv[])
{
	int n,i,p,x,y;
	x=y=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		{scanf("%d",&p);
		if (p>x ){
			y=x;
			x=p;}
		else 
			if(p>y)
				y=p;
				}
	printf("%d\n%d",x,y);
	return 0;
}
