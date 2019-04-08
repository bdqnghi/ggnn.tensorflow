void main()
{   
  int i,j,kong,max[100],hang;
  char bi;
  char a[100][50];
  char b[100][50];
  for(i=0;i<100;i++)
  {
	  gets(a[i]);
	  if(strlen(a[i])==0) break;
	  max[i]=0;bi=a[i][0];
	  for(j=1;a[i][j]!=' ';j++)
	  {
		  if(a[i][j]>bi)
		  {
			  bi=a[i][j];
			  max[i]=j;
		  }
	  }//???ASCII??????????
	  for(j=1;j<strlen(a[i]);j++)
	  {
		  if(a[i][j]==' ')
		  {
			  kong=j;
			  break;
		  }//kong????????
	  }
	  for(j=0;j<=max[i];j++)
	  {
		  printf("%c",a[i][j]);
	  }
	  printf("%c%c%c",a[i][kong+1],a[i][kong+2],a[i][kong+3]);
	  for(j=max[i]+4;j<strlen(a[i])-1;j++)
	  {
		  printf("%c",a[i][j-3]);
	  }
	  printf("\n");
	  
	 
  }
  

}
	