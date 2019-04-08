int number[50000]; 
int check(int x)
{
	if(x==3)return 1;
	for(int y=3;y<x;y=y+2)if(x%y==0)return 0;
	return 1;
}
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=3;i<n;i+=2)
	{
		number[i]=check(i);
	}
	for(i=6;i<=n;i+=2)
	{
		for(j=3;j<=i/2;j+=2)
		{
			if(number[j]==1&&number[i-j]==1)
			{
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}	
	}
}