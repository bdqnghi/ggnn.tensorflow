int main()
{
   int a[100],b[100],n,i,c=0,d[100];
   scanf("%d",&n);
   for(i=0;i<n;i++){
   scanf("%d%d",&a[i],&b[i]);
   if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){
   c++;
   d[i]=0;
}else{d[i]=c;
c=0;}
}
   for(i=0;i<n;i++){
   if(d[i]>d[i+1]){
   d[i+1]=d[i];
}
}
   if(d[n-1]>=c){
   printf("%d\n",d[n-1]);
   }else{
   printf("%d\n",c);
   }
   return 0;
}