
int p(int n,int heightLimit,int *missileHeight,int missileNum)
{
	int a;
	int b;
	
	//???????????????
	if (n==missileNum-1) 
		if (missileHeight[n]<=heightLimit) 
			return 1;
		else
			return 0;
	else
		if (missileHeight[n]<=heightLimit)
		{
			a=1+p(n+1,missileHeight[n],missileHeight,missileNum);
		    b=p(n+1,heightLimit,missileHeight,missileNum);
			return a>b?a:b;
		}
		else
			return p(n+1,heightLimit,missileHeight,missileNum);
}

void main()
{
		int n,i,j;
		int *missileHeight;		

		int highest=-1;

	
		scanf("%d",&n);
missileHeight=(int*)malloc(sizeof(int)*n);

for(i=0;i<n;i++)
{
	scanf("%d",&(missileHeight[i]));
	if (missileHeight[i]>highest) highest=missileHeight[i];
}
	printf("%d",p(0,highest,missileHeight,n));
}