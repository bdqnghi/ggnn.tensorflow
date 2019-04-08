int main()
{
   int a[100],i,e,k;
   char id[100][10],p[10];
   int n;
   scanf("%d",&n);
   for(i=0;i<n;i++){
      scanf("%s%d",id[i],&a[i]);
   }
   for(k=1;k<=n;k++){
     for(i=n-1;i>k-1;i--){
        if(a[i]>a[i-1]&&a[i]>=60){
           e=a[i];
           a[i]=a[i-1];
           a[i-1]=e;
           strcpy(p,id[i]);
           strcpy(id[i],id[i-1]);
           strcpy(id[i-1],p);
        }
      }
   }
   for(i=0;i<n;i++){
      printf("%s\n",id[i]);
   }
 return  0;
}
           