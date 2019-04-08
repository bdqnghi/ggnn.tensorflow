int main()
{
   int a[ROW][COL];
   int row,col,n;
   int b=0,c;
   scanf("%d",&n);
   for(row=0;row<n;row++)
   {
	   for(col=0;col<n;col++)
	   {
		   scanf("%d",&a[row][col]);}
   }
for(row=0;row<n;row++)
   {
	   for(col=0;col<n;col++)
	   {
		   if(a[row][col]==0)
		   b++;
}
}
c=(b-4)*(b-4)/16;
printf("%d",c);
return 0;
		   }
