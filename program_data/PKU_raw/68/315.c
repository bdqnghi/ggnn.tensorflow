int sushu(int p)
{
	int i;
	for(i=2;i<=(int)sqrt(p);i++)
		if(p%i==0) return 0;
	return 1;

}

int main(int argc, char* argv[])
{
	int n,i,k;
	scanf("%d",&n);
	
	for(i=6;i<=n;i+=2)
	{
		for(k=2;k<=i/2;k++)
		{
			if(sushu(k)==1&&sushu(i-k)==1)
			{
				
				printf("%d=%d+%d\n",i,k,i-k);
                break;
			}
		}
	}
	

			return 0;
}
