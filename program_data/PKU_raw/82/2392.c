
int main(){
   int c[100],n,i,j=0;
   scanf("%d",&n);
   for(i=0;i<n;i++){
	   c[i]=0;
   }
   int a,b;
   for(i=0;i<n;i++){
	   scanf("%d%d",&a,&b);
	   if(a>=90&&a<=140&&b>=60&&b<=90)
		   c[j]++;
	   else{
		   j++;
	   }
   }
   int m;
   for(i=0;i<n;i++){
	   for(j=0;j<n-1;j++){
		   if(c[j]<c[j+1]){
			   m=c[j];
		       c[j]=c[j+1];
			   c[j+1]=m;
		   }
	   }
   }
   printf("%d",c[0]);
	getchar();
	getchar();
		return 0;
}