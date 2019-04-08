int isSUSHU (int x);
int main (){
   int n,i,j;
   int sz[LEN][2];
   scanf("%d",&n);
   j=0;
   for(i=2;i<=(n-2);i++){
	   if (isSUSHU(i)){
		  if(isSUSHU(i+2)){
		    sz[j][1]=i;
			sz[j][2]=i+2;
			j++;
		  }
	   }
   }
   if(j==0){
    printf("empty");
   }
   else{
     for(i=0;i<j;i++){
      printf("%d %d\n",sz[i][1],sz[i][2]);
	 }
   }
return 0;
}
int isSUSHU (int x){
  int z;
  for(z=(x-1);z>=1;z--){
	  if(x%z==0){
	    break;
	  }
  }
  if(z==1){
    return 1;
  }
return 0;
}
