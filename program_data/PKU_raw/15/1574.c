int main(){
   int sz[100][100];
   int i,j,n,a1=-1,a2=-1,b1,b2,result;
   scanf("%d",&n);
   for(i=0;i<n;i++){
	   for(j=0;j<n;j++){
	       scanf("%d",&sz[i][j]);
	   }
   }
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
		   if(sz[i][j]==0){
		      a1=i;
			  b1=j;
			  break;
		   }
		   
	   }
     if (a1!=-1){
		   break;}
   }
   for(i=n-1;i>-1;i--){
	   for(j=n-1;j>-1;j--){
	       if(sz[i][j]==0){
		      a2=i;
			  b2=j;
			  break;
		   }
	   }
    if (a2!=-1){
		   break;}
   }
   result=(a2-a1-1)*(b2-b1-1);
   printf("%d",result);
   return 0;


}