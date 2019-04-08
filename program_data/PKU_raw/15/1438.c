int main()
{
  int n,x1,y1,x2,y2,i,j,f;
  int can[max][max];
	  
  scanf("%d",&n);
  f=1;
  for(i=1;i<=n;i++)
	  for(j=1;j<=n;j++)
	  {
		  scanf("%d",&can[i][j]);
		  if((can[i][j]==0)&&(f))
		  {
		      f=0;
			  x1=i;
			  y1=j;
		  }
	  }

   for(i=x1,j=y1+1;(can[i][j]==0)&&(j<=n);j++);
   j--;
   for(i=x1;(can[i][j]==0)&&(i<=n);i++);
   i--;
   x2=i;
   y2=j;
   i=(x2-x1-1)*(y2-y1-1);

   printf("%d",i);
  return 0;
}