int main()
{
  int n,i,j;
  int a[300][2];
  int countA=0;
  int countB=0;

  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
	  for(j=0;j<2;j++)
	  {
		  scanf("%d",&a[i][j]);
	  }
  }
  
  for(i=0;i<n;i++)
  {
	  if( (a[i][0]==0 && a[i][1]==1) || (a[i][0]==1 && a[i][1]==2) || (a[i][0]==2 && a[i][1]==0) )
	  {
		  countA=countA+1;
	  }
      else if((a[i][0]==0 && a[i][1]==0) || (a[i][0]==1 && a[i][1]==1) || (a[i][0]==2 && a[i][1]==2))
	  {
          countA=countA+1;
		  countB=countB+1;
	  }
	  else
	  {
          countB=countB+1;
	  }
  }

  if(countA>countB)
  {
	  printf("A");
  }
  else if(countB>countA)
  {
      printf("B");
  }
  else
  {
	  printf("Tie");
  }
 
  
	
	
	
	return 0;
}
