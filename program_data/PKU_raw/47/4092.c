int main()
{
   int i,a[100];
   int n;
   scanf("%d\n",&n);
   for(i=0;i<n;i++){
   scanf("%d ",&a[i]);
}

   for(i=n-1;i>=1;i--){
   printf("%d ",a[i]);
}
   for(i=0;i>=0;i--){
   printf("%d",a[i]);
}

   return 0;
}

