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
void gede(unsigned int i,unsigned int j)
{	 unsigned int x,y,k,l;
	for(k=3;k<=i/2;k=k+2)
		{
		l=i-k;
		int prove(int x);
		x=prove(k);
		y=prove(l);
		if(x==1&&y==1)
			{
			printf("%d=%d+%d\n",i,k,l);
			break;
			}
		}
if(i<j-1) gede(i+2,j);		
}
int main()
{
unsigned int n;
scanf("%d",&n);
gede(6,n);
return(0);
}