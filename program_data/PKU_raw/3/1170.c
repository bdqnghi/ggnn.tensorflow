int main()
{
   int n,k,i,j,d=0,a[1000],s;
   scanf("%d %d",&n,&k);
   for(i=0;i<n;i++){
	   scanf("%d",&a[i]);
	   for(j=1;j<=i;j++){
		   s=a[i]+a[j];
		   if(s==k){
			   d++;
		   }
	   }
   }
   if(d!=0){
	   printf("yes");
   }
   else if(d==0){
	   printf("no");
   }
   return 0;
}
