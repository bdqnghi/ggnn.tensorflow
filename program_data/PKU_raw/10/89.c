int i,j;
void main()
{
	int b[26]={0};
	int k;
	int f(int x,int y,int a[26]);
	scanf("%d",&k);
	for(i=0;i<=k-1;i++)
		scanf("%d",&b[i]);
	printf("%d\n",f(k,k,b)-1);
}
int f(int x,int y,int a[26])
{
	if(y==0)
		return(1);
	int s=0;
	if(y>=1)
	{
		for(i=0;i<y;i++)
		{
			if(a[i]>=a[y]&&f(x,i,a)>=s)
				s=f(x,i,a);
		}
	}
	if(i==y)
		return(s+1);
}