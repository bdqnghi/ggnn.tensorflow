int main()
{
   int n,i,k;
   float bz,qt,cha;
   scanf("%d",&n);
   int gs[1000][2];
   for(i=0;i<n;i++)
     {
        for(k=0;k<2;k++)
          {
             scanf("%d",&gs[i][k]);
          }
      }
   bz=(float)gs[0][1]/gs[0][0];
   for(i=1;i<n;i++)
     {
        qt=(float)gs[i][1]/gs[i][0];
        cha=qt-bz;
        if(cha>0.05)
          {
             printf("better\n");
           }
         else if(cha<-0.05)
            {
               printf("worse\n");
             }
         else printf("same\n");
      }
   return 0;
}
 





               