

int main()
{

  int i,j,h,l,x,y,k;
  int a[hang][lie];

 
  scanf("%d %d",&h,&l);
  
  for(i=0;i<h;i++){
    for(j=0;j<l;j++){
          scanf("%d",&a[i][j]);
	}
  }

  k=0;
  x=0;
  i=0;
  while(k<(h*l)){ 
   
      for(j=x;j<l;j++){
	     printf("%d\n",a[i][j]);
		 k++;
		 a[i][j]=-1;
		 y=j;
		 if(a[i][j+1]==-1){
			 break;
		 }
	  }
	  if(k==(h*l)){
         break;
	  }
	  

     for(i=x+1;i<h;i++){
	     printf("%d\n",a[i][y]);
		 k++;
		 a[i][y]=-1;
		 x=i;
		 if(a[i+1][y]==-1){
			 break;
		 }
	  }
	  if(k==(h*l)){
         break;
	  }


	  for(j=y-1;j>=0;j--){
	     printf("%d\n",a[x][j]);
		 k++;
		 a[x][j]=-1;
		 y=j;
		 if(a[x][j-1]==-1){
			 break;
		 }
	  }
	  if(k==(h*l)){
         break;
	  }


	  for(i=x-1;i>=0;i--){
	     printf("%d\n",a[i][y]);
		 k++;
		 a[i][y]=-1;
		 x=i;
		 if(a[i-1][y]==-1){
			 break;
		 }
	  }
	  if(k==(h*l)){
         break;
	  }
	  
  }
	 
 
return 0;
}

