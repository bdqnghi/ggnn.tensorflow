int sushu(int n)
	{
		int a=2,b=1;
		if(n%a==0)
		{
			b=0;
			return (b);
		}
		for(a=3;a<sqrt(n)+1;a+=2)
		{
			if(n%a==0)
			{
				b=0;
				break;
			}
		}
		return(b);
	}
int main(int argc, char* argv[])
{
	int m,i,p;
	scanf("%d",&p);
	for(m=6;m<p+1;m+=2)
	{
		for(i=3;i<m;i+=2)
		{
			if(sushu(i)==1&&sushu(m-i)==1)
			{
				printf("%d=%d+%d\n",m,i,m-i);
			break;
			}
		}
	}
	return 0;
}

