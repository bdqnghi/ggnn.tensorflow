long a[1000],b[1000];
int cmp(const void *a,const void *b )
{
    return(*(long*)a)-(*(long*)b);
}

main()
{
   long n;
   while(1)
   {
      long sum=0,i,j,end1,end2;
      scanf("%ld",&n);
      if(n==0) break;
      for(i=0;i<n;i++)
      scanf("%ld",&a[i]);
      for(i=0;i<n;i++)
      scanf("%ld",&b[i]);
      qsort(a,n,sizeof(long),cmp);
      qsort(b,n,sizeof(long),cmp);
      j=0;
      for(i=j=n-1,end1=end2=0;j>=end2&&i>=end1;j--)
      {
      if(a[i]>b[j])
      {
      sum++;
      i--;
      }
      else if(a[i]<b[j])
      {
      sum--;end1++;
      }
      else 
      {
         if(a[end1]>b[end2])//a??????b????
         {
         sum++;end1++;end2++; j++;
         }
         else if(a[end1]<b[end2])
         {
         sum--;end1++;
         }
         else
         {
            if(a[end1]==b[j])
            {
            end1++;
            }
            else
            {
            sum--;
            end1++;
            }
         }
      }
   }
printf("%d\n",sum*200);
}
return 0;
}
