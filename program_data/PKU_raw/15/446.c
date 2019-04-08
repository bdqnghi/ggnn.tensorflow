int a[1000][1000]={0};
int main()
{
	int n,i,j,b=0,c=0,d=0,e=0,f,x=0,y=0;
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		   if(a[i][j]==0)
		   {
			   b=i;
			   c=j;
			   x=1;
			   break;
		   }
		   
		}
        if(x==1)
			   break;

	}

    for(i=n-1;i>=0;i--)
	{
		for(j=n-1;j>=0;j--)
		{
		   if(a[i][j]==0)
		   {
			   d=i;
			   e=j;
			   y=1;
			   break;
		   }

		}
        if(y==1)
			   break;

	}
	
    f=(d-b-1)*(e-c-1);
	printf("%d",f);

   
	return 0;
}
