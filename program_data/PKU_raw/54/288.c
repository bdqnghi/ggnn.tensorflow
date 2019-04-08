main()
{
	int n,k,i,j=1,t;
	scanf("%d %d",&n,&k);
	for(i=1;;i++)
	{  j=1;t=i*n+k;
	   while(j<n)
	   {
	   if(t%(n-1)!=0&&t>=(n-1)) break;
	   else if(t%(n-1)==0&&t<(n-1)) break; 
	   else t=t/(n-1)*n+k;j++;
	   } if(j>=n) break;
	} printf("%d\n",t);
}
