
int main()
{
   int row;
   int col;
   int i,j,k;
   int t=0;
   int a[200][200];
   scanf("%d%d",&row,&col);
   for(i=0;i<row;i++)
   {
	   for(j=0;j<col;j++)
	   {
		   scanf("%d",&a[i][j]);
	   }
   }
   for(i=0;i<row;i++)
   {
	   for(j=i;j<col-i;j++)
	   {
		  t++;
		  if(t==row*col){
			  printf("%d",a[i][j]);
	return 0;}
		  else {printf("%d\n",a[i][j]);}

	   }
	   j=col-i-1;
	   for(k=i+1;k<row-i;k++)
	   {
		 t++;
		  if(t==row*col){
			  printf("%d",a[k][j]);
	return 0;}
		  else {printf("%d\n",a[k][j]);}
		
		 
	   }
	   k=row-i-1;
	   for(j=col-i-2;j>=i;j--)
	   {
		  t++;
		  if(t==row*col){
			  printf("%d",a[k][j]);
	return 0;}
		  else {printf("%d\n",a[k][j]);}
		  
	   }
	   j=i;
	   for(k=row-i-2;k>i;k--)
	   {
		   t++;
		  if(t==row*col){
			  printf("%d",a[k][j]);
	return 0;}
		  else {printf("%d\n",a[k][j]);}
		   
	   }
   }
	
	return 0;

}