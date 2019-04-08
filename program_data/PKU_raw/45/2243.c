
int main(){
   char sor[20],wt[20];
   int i,j,tag;
   scanf("%s%s",wt,sor);
   int n=strlen(sor);
   int k=strlen(wt);
   for(i=0;i<n-k+1;i++){
	   tag=0;
	   for(j=i;j<=i+k-1;j++){
		   if(wt[j-i]!=sor[j]){
			   tag=1;
			   break;
		   }
	   }
	   if(tag==0){
		   printf("%d",i);
		   break;
	   }
   }
	return 0;
}


