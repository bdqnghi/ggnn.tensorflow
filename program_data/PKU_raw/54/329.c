void main()
{
	int n,k,i,j,a=0,b,s1,s2; 
	int x,y;
	scanf("%d%d",&n,&k);
	for(i=1;a==0;i++)
	{
	   x=n*i+k;
	   
       for(j=1;j<=n-1;j++)
		{ 
		   b=x;
		   y=(n*x)/(n-1)+k; 
		   x=y;
		   s1=(y-k)*(n-1);
		   s2=n*b; 
		   if(s1!=s2)break;
        }
        if(s1!=s2)continue;
        a=1;
      
		
        
    }
	
	printf("%d\n",y);
}