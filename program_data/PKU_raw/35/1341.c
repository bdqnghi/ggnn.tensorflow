int main()
{
	int arr[8][8];
	int h,l;
	scanf("%d,%d",&h,&l);
	int i,j;
	for(i=0;i<h;i++)
	{
		for(j=0;j<l;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int za,zb,jj;
	int a;
	for(a=0;a<h;a++)
	{
		int b;
		for(b=0;b<l;b++)
		{
            int c,js=0;
			for(c=0;c<l;c++)
	        {
		        if(arr[a][b]>arr[a][c])
				{
					js+=1;
				}
			}
			if(js==l-1)
			{
                int d,js2=0;
				for(d=0;d<h;d++)
				{
				    
					if(arr[a][b]<arr[d][b])
					{
					    js2+=1;
					}
				}
					if(js2==h-1)
					{
						za=a;
						zb=b;
                        jj=1;
					}
					
			}
			
		}				 
	}
	if(jj==1)
	{printf("%d+%d",za,zb);}
	else
		printf("No");
	return 0;
}