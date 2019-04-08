void main()
{
   int input[300]={0},i=0,n=0,num[1000]={0};
  // for(i=0;i<1000;i++) printf("%d ",num[i]);
   scanf("%d",&n);
   for(i=0;i<n;i++) scanf("%d",&input[i]);
   for(i=0;i<n;i++)
   {
      num[input[i]]++;
      if(num[input[i]]>1) input[i]=0;
   }
//   for(i=0;i<10;i++)
//   printf("%d ",num[i]);

   printf("%d",input[0]);

   for(i=1;i<n;i++)
   {
      if(input[i]) printf(",%d",input[i]);
   }
   printf("\n");
}

