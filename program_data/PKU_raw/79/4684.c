int main()
{
    int i,j=1,k=0,n,m,count=0,sz[N];
	while(1)
	{
       scanf("%d%d", &n,&m);
       if(m==0&&n==0) break;
	   else
	   {
		   if(n==1){j=1;}
		   else
           {
			   j=1;
			   for(i=2;i<=n;i++)
			   {
                  j=(j+m-1)%i+1;
			   }
		   }
		  count++;
		  sz[k]=j;
		  k++;
	   }
    } 
	for(k=0;k<count;k++)
	{
		printf("%d\n",sz[k]);
	}
	
	return 0;
}