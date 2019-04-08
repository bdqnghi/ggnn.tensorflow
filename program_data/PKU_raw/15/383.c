int main()
{
    int i,j,n,x1,y1,x2,y2,a[1000],t;
	x1=-1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
			if(a[j]==0)
			{
				if(x1==-1)
				{
					x1=i;
					y1=j;
				}
		        x2=i;
				y2=j;
			
			}
			
		}
	}
		t=(x2-x1-1)*(y2-y1-1);
	printf("%d\n",t);
	return 0;
}
