void main()
{
   int a[100][100],i,j,n,t1,t2,m1,m2,s,num;
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
		   if(a[i][j]==0&&a[i][j-1]==255&&a[i-1][j]==255&&a[i][j+1]==0)
			   t1=i,m1=j;
		   if(a[i][j]==0&&a[i][j-1]==0&&a[i][j+1]==255&&a[i+1][j]==255)
			   t2=i,m2=j;
	   }
	}

     s=(t2-t1+1)*(m2-m1+1);
   num=s-2*(t2+m2-t1-m1);
   printf("%d",num);
}