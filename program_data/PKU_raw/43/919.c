int z(int n)
{
	int i,t,r;
	t=0;
	r=(int)sqrt(n)+1;
	for(i=3;i<=r;i=i+2)
	{
		if(n%i==0)
		{
			t++;
			break;
		}
	}
	if(t==0)
		return(1);
	else
		return(0);
}
int main()
{
	int m,i,j;
	scanf("%d",&m);
	for(i=3;i<=m/2;i=i+2)
	{
		if(z(i))
		{
			j=m-i;
			if(z(j))
			printf("%d %d\n",i,j);
			
		}
	}
	
	return 0;
}

