int prove(int x)
{
int y=1,i;
if(x%2==0) y=0;
else
for(i=3;i<=sqrt(x);i++)
	{if(x%i==0) y=0;
	}
return(y);
}
int main()
{
unsigned int n,l,x,y;
scanf("%d",&n);
unsigned int i,k,p;
for(i=6;i<=n;i=i+2)
	{p=0;
	for(k=3;k<=i/2;k=k+2)
		{
		if(p==1)
			continue;
		else
			l=i-k;
		int prove(int x);
		x=prove(k);
		y=prove(l);
		if(x==1&&y==1)
			{p=1;
			printf("%d=%d+%d\n",i,k,l);}
		else
			p=0;
		}		
	}
return(0);
}
