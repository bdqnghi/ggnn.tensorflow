int main()
{
 int *num;
 int n,m,i,j;
 while(scanf("%d %d",&n,&m),n!=0||m!=0){
  if(n==1){
   printf("1\n");
  }
  else if(m==1){
   printf("%d\n",n);
  }
  else{
   
   num = (int *)malloc((m*(n-1)+3)*sizeof(int));
   for(i=1;i<=n;i++)
   {
    num[i] = i;
   }
      for(j=1; j<(m*(n-1)+2); j++)
   {
    if(j%m!=0)
     num[i++]=num[j];
   }
   printf("%d\n",num[m*(n-1)+2]);
  }
 }
 return 0;
}