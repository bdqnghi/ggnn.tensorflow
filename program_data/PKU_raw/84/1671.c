int main()
{
int n,x,y,z,m;
scanf("%d",&n);
x=0;y=0;z=0;
for (n=n;n>0;n=n-1)
	{scanf("%d",&x);
		if (x>=y)
		{z=y;
		y=x;}
		else
		{y=y;
		if (x>z)
		z=x;
		}
	}
if (n==0) {printf("%d\n",y);printf("%d",z);}
x=0;y=0;z=0;
return 0;
}
