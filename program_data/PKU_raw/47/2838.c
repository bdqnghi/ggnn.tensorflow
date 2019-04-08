int main(){
	int n=0,m=0,i=0,t=0,w=0;
   int a[10000],b[10000];
   scanf("%d",&n);
   for(i=0;i<n;i++){
      scanf("%d",&(a[i]));
   }
   for(i=0;i<(n/2);i++){
	   t=a[i];
	   a[i]=a[n-1-i];
	   a[n-1-i]=t;

   }
      for(i=0;i<n-1;i++){
	   printf("%d ",a[i]);
   }
	   printf("%d",a[i]);

return 0;

}

