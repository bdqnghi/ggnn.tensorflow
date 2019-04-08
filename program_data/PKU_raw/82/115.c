int main(){
   int i,j=0,t=0,n,k,e,ss[101],sz[101],sz2[101];
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%d%d",&ss[i],&sz[i]);
   }
   for(i=0;i<n-1;i++){
       if((ss[i]>=90)&&(ss[i]<=140)&&(sz[i]>=60)&&(sz[i]<=90)){
	     j++; 
	   }
	   else{
		 sz2[t]=j;
		 t++;
	     j=0;
	   }
   }   
   if((ss[n-1]>=90)&&(ss[n-1]<=140)&&(sz[n-1]>=60)&&(sz[n-1]<=90)){
       j++;
	   sz2[t]=j;
   }
   else{
      sz2[t]=j;
   }
   for(k=1;k<t+1;k++){
	   for(i=0;i<t+1-k;i++){
		   if(sz2[i]<sz2[i+1]){
		      e=sz2[i+1];
			  sz2[i+1]=sz2[i];
			  sz2[i]=e;
		   
		   
		   }
	   }
   }
  printf("%d",sz2[0]);

return 0;
}
