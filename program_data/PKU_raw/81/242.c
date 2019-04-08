int main(){
  int a[5][5],b[5][5],m,n,i,j;
  for(i=0;i<5;i++){
	  for(j=0;j<5;j++){
	     scanf("%d",&a[i][j]);
	  }
  }
  scanf("%d%d",&n,&m);
  if(n<5&&m<5&&n>=0&&m>=0){
     for(i=0;i<5;i++){
	
	   for(j=0;j<5;j++){
		   if(i==m)
			   b[i][j]=a[n][j];
		   else if(i==n)
			   b[i][j]=a[m][j];
		   else
			   b[i][j]=a[i][j];
	    
	   }
	  
	 }
	 for(i=0;i<5;i++){
     for(j=0;j<5;j++){
		   if(j==0)
	     printf("%d",b[i][j]);
		   else if(j==4)
			   printf(" %d\n",b[i][j]);
		   else
			   printf(" %d",b[i][j]);
	    }
	 }

  }
  else
	  printf("error");
  return 0;
}
	

