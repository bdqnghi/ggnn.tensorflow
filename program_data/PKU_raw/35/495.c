int main(){
 int i,j,max,k,maxa,m,n,t,s=0;
 
 scanf("%d,%d\n",&m,&n);
 int a[8][8];
 for (i=0;i<m;i++){
  for(j=0;j<n;j++){
   scanf("%d",&a[i][j]);
  }
  printf("\n");
 }
 for(i=0;i<m;i++){
	  t=0;
	
  max=a[i][0];
maxa=0;
  for(j=0;j<n;j++){
	  if(max<a[i][j]){
    max=a[i][j];
	maxa=j;}
  }
  for(k=0;k<m;k++){
   if(max>a[k][maxa])
   {t++;
   }
  }
  if(t==0){
   printf("%d+%d\n",i,maxa);
  s++;}
 }
 if(s==0)
  printf("No");
 return 0;
}

