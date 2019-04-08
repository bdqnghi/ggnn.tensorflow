
int main()
{
	int sushu(int x);
	int a,b,n,n2,i,i2,j;
	scanf("%d",&n);
	n2=n/2;

	for(i=3;i<=n2;i++)
	{
		i2=i+i;
		for(j=3;j<=i2;j++)
		{
			a=j;b=i2-j;
			if (sushu(a)==1 && sushu(b)==1)
			{
				printf("%d=%d+%d\n",i2,a,b);
				break;
			}
		}

	}

}

int sushu(int a)
{
	int i,b=0,x=1;
	if(a==2) x=1;
	if(a>2) 
	{
		for(i=2;i<(a/2);i++)
		{
			if((a%i)==0) b++;
			else b=b;		
		}
		if(b>0) x=0;
		
	}
	return(x);
}