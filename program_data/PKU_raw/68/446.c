void main()
{
	int n,i,j,k,l,a;
		scanf("%d",&n);
		for(i=6;i<=n;i=i+2)
		{
			a=0;
		   for(k=2;k<=sqrt(i-3);k++)
			  if((i-3)%k==0) break;
			  if(k>sqrt(i-3)) printf("%d=3+%d\n",i,i-3);
			  else for(j=5;j<=i-5;j++)
			  { 
				  for(k=2;k<=sqrt(j);k++)
					  if(j%k==0) break;
					  if(k>sqrt(j)) 
			       {
					for(l=2;l<=sqrt(i-j);l++)
					 if((i-j)%l==0) break;
				     if(l>sqrt(i-j))
					 {
						 a++;
			            printf("%d=%d+%d\n",i,j,i-j);
					 }
					 
				}if(a==1) break;
		}
}
}