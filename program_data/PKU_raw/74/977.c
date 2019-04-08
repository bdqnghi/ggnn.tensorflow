int m,n;
int huiwen(int x,int y)
{
	if(x==0)
		return y;
	else
	{
		y=y*10+x%10;
		return huiwen(x/10,y);
	}
}
int zhishu(int k)
{
	int z;
	for(z=2;z<=sqrt(k);z++)
	{
		if(k%z==0)
			break;
	}
	if(z>sqrt(k))
		return 1;
	else 
		return 0;
}
void main()
{
	int m,n,i,c=0,t=0,a;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		t=huiwen(i,0);
		if(t==i)
		{
			a=zhishu(i);
			if(a==1)
			{
				c++;
				if(c==1)
					printf("%d",i);
				else
					printf(",%d",i);
			}
		}
	}
	if(c==0)
		printf("no");
	printf("\n");
}
