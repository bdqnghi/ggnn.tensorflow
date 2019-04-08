void main()
{
	int i,n,h,x,m,j;
	int sushu(int j);
	scanf("%d",&m);
	for(j=6;j<=m;j+=2)
	{
		for(i=3;i<=j/2;i+=2)
		{
			h=sushu(i);
			if(h==0) continue;
			else
			{
				x=j-i;
				h=sushu(x);
				if(h==0) continue;
				else
				{
					printf("%d=%d+%d\n",j,i,x);
				}
				break;
			}
		}
	}
}

int sushu(int i)
{
	int j,k;
	k=sqrt(i);
	for(j=2;j<=k;j++) if(i%j==0) break;
	if(j>k) return(1);
	else return (0);
}

			




