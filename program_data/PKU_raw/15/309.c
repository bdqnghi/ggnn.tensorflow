int main()
{
	int a[100][100],i,j,min,max,e,b,c,d,n,t;
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}	
	max=0;
	min=200;
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)	
		{
			if(a[i][j]==0)
			{   
				if((i+j)>max)
				{
				max=i+j;
				e=i;b=j;
				}
				if((i+j)<min)
				{
				min=i+j;
				c=i;d=j;
				}
			}
		}
	}
   	t=(e-c+1)*(b-d+1)-2*(e-c+1)-2*(b-d-1);
	printf("%d",t);
	return 0;
}