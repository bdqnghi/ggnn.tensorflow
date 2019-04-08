
int main()
{
	int prime(int);
	int i,n,h;
	scanf("%d",&n);
	for(h=6;h<(n+1);h=h+2)
    {for(i=3;i<=(h/2);i++)
	{
		if(prime(i)==1&&prime(h-i)==1)
		{	printf("%d=%d+%d\n",h,i,h-i);
		break;
		}
	}
    }
	return 0;
}

	int prime(int n)
	{ int i,flag=1;
	for(i=2;i*i<=n&&flag==1;i++)
	{if(n%i==0)
	flag=0;}
	return(flag);}