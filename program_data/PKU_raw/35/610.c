int main()
{
    int h,l,i,j,s=0;
    double a[8][8],b[8][8],c[8][8],temp;
    scanf("%d,%d",&h,&l);
    for(i=0;i<h;i++)
    {
    	for(j=0;j<l;j++)
    	{
    	scanf("%lf",&a[i][j]);
    	b[i][j]=a[i][j];
    	c[i][j]=a[i][j];
    	}
    }
    double hm[8]={0};
    for(i=0;i<h;i++)
    {
    	for(j=0;j<l-1;j++)
    	{	
    		if(b[i][j]>b[i][j+1])
    		{
    		hm[i]=b[i][j];
    		temp=b[i][j];
    		b[i][j]=b[i][j+1];
    		b[i][j+1]=temp;
    		}
    		else
    		hm[i]=b[i][j+1];
    	}
    }
        double lm[8]={0};
    for(j=0;j<l;j++)
    {
    	for(i=0;i<h-1;i++)
    	{
    		if(c[i][j]<c[i+1][j])
    		{
    		lm[j]=c[i][j];
    		temp=c[i][j];
    		c[i][j]=c[i+1][j];
    		c[i+1][j]=temp;
    		}
    		else
    		lm[j]=c[i+1][j];
    	}
    }
    for(i=0;i<h;i++)
    {
    	for(j=0;j<l;j++)
    	{
    		if(hm[i]==lm[j])
    		{printf("%d+%d",i,j);
    		s++;}
    	}
    }
    if(s==0)
    printf("No");
    return 0;
}
    