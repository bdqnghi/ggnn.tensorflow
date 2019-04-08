int main () {
	int n,a[200][2],i,j,x=0,y=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
		if((a[i][0]==0&&a[i][1]==1)||(a[i][0]==1&&a[i][1]==2)||(a[i][0]==2&&a[i][1]==0))
		{
			x++;
		}
		else if(a[i][0]==a[i][1])
		{
			y++;
		}
	}
	
		if(x*2==(n-y))
		{
			printf("Tie");
		}
		else if(x*2<(n-y))
		{
			printf("B");
		}
		else
		{
			printf("A");
		}
	
	
	return 0;
}