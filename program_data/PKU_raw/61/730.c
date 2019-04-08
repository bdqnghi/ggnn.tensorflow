int main (){
	int n,i,a,j,b[100];
    scanf("%d",&n);
   for(i=0;i<n;i++){
	   scanf("%d",&a);
	   for(j=0;j<100;j++){
		   if(j==0||j==1){b[j]=1;}
		   else {b[j]=b[j-1]+b[j-2];}
	   }
       printf("%d\n",b[a-1]);
   }
  return 0;
}