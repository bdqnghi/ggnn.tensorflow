int main()
{
	int shisushu(int j);
	int n,i,j,p,k;
	scanf("%d",&n);
	for(i=6;i<=n;i+=2)
	{
		for(j=2;j<=(i/2);j++)
		{
			if(shisushu(j)&&shisushu(i-j))
			{
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}
	}
	return 0;
}
int shisushu(int j)
{
	int k,p;
	if(j==2||j==3||j==5||j==7||j==11||j==13||j==17)return 1;
	else{
	k=sqrt(j);
	for(p=2;p<=k;p++)
		if(j%p==0)break;
		if(p>k)return 1;}
	return 0;
}