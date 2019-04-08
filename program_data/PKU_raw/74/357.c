
int zhishu(int x) 
{ 
int b,j; 
b=(int)sqrt(x); 
for(j=2;j<=b;j++) 
{ 
if(x%j==0)break; 
} 
if(j!=(b+1))return(0); 
else return(1); 
}

int nixu(int x,int z)
{
	if(x==0)return z;
	else return nixu(x/10,z*10+x%10);
}

int huiwen(int x)
{
	if(x==nixu(x,0))return 1;
	else return 0;
}

void main ()
{
	int m,n,i,count=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)if(zhishu(i)&&huiwen(i))count=i;
	if(count==0)printf("no\n");
	else
	{
		for(i=m;i<=n;i++)
		{
			if(zhishu(i)&&huiwen(i))
			{
				printf("%d",i);
				if(i!=count)printf(",");
			}
		}
	}
	putchar(10);
}
