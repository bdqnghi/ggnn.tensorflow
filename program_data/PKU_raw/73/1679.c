int main()
{
 int a[5][5],max,h,l,sum,s=0;
 int i,j,k;
 
 for(i=0;i<5;i++){
	 for(j=0;j<5;j++){
		 scanf("%d",&a[i][j]);
	 }
 }
 
 for(i=0;i<5;i++){
	 
	 sum=0;
	 max=a[i][0];
	 h=i;
	 l=0;
     for(j=0;j<5;j++){
		 if(max<a[h][j]){
			 max=a[h][j];
			 l=j; 
		 }
	 }
     
	 for(k=0;k<5;k++){
	      if(max<=a[k][l]){
			   sum++;
		  }
	 }
	 
	 if(sum==5){
				 printf("%d %d %d",h+1,l+1,a[h][l]);
				 return 0;
			 }
 }
	    
 printf("not found");
 return 0;
}
