void main()
{
	int n,i,j,r,t=1,k,m=0,v,l;
    scanf("%d\n",&n);
    for(i=3;i<=n;i++)
       if(i%2 != 0)
	   {
		   k=(int)sqrt(i);
		   for(j=3;j<=k+2;j=j+2)
           {
			   if(j>=k+1) 
			   {
				   v=i+2;
				   if(v<=n)
				   {
					   l=(int)sqrt(v);
				       for(r=3;r<=k+2;r=r+2)
					   {
						   if(r>=l+1) {printf("%d %d\n",i,v);m++;}
					       if(v%r == 0) break;
					   }
				   }
			   }
			   if(i%j == 0) break;
		   }
	   }
	if(m==0) printf("empty\n");
}