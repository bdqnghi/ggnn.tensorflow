int ss(int n)
{
	int i,s;
	s=0;
	i=2;
	if(n==2||n==3) return 1;
	
	do
	{
		i++;
	if(n%i==0) s++;
	}
	while(i*i<n);
	if(s==0) return 1;
	else return 0;}

int main()
{
	int m,k,j,p;
	scanf("%d",&m);
	for(k=6;k<=m;k=k+2)
	{
		for(j=3;j<=k/2;j+=2)
		{
			if(ss(j))
			{
				p=k-j;
				if(ss(p))
				{
					printf("%d=%d+%d\n",k,j,p);
					break;
				}
			}
		}	
	}
return 0;
}