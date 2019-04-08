   struct stu
{ 
     char a[21];
     int b[2];
     char c;
     char d;
     int e;
     int sum;
   };
   int main()
   {
       struct stu h[100];
       int n,i,j,k,sum1;
       scanf("%d",&n);
       for(i=0;i<n;i++)
       {
         scanf("%s %d%d %c %c%d",h[i].a,&h[i].b[0],&h[i].b[1],&h[i].c,&h[i].d,&h[i].e);
         h[i].sum=0;
        if(h[i].b[0]>80&&h[i].e>=1)
         h[i].sum=h[i].sum+8000;
         if(h[i].b[0]>85&&h[i].b[1]>80)
         h[i].sum=h[i].sum+4000;
         if(h[i].b[0]>90)
         h[i].sum=h[i].sum+2000;
         if(h[i].b[0]>85&&h[i].d=='Y')
         h[i].sum=h[i].sum+1000;
         if(h[i].b[1]>80&&h[i].c=='Y')
         h[i].sum=h[i].sum+850;
         }
    //     for(i=0;i<n;i++)
    //      printf("%d\n",h[i].sum);
         k=0;
         sum1=h[0].sum;
         for(i=1;i<n;i++)
         {
           if(h[k].sum<h[i].sum)
           k=i;
           sum1=sum1+h[i].sum;
         }
         printf("%s\n%d\n%d\n",h[k].a,h[k].sum,sum1);
         return 0;
   }
         
          
