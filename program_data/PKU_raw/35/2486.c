int main()
{
     int ctu;
     do
     {        //begin
         int a[18][18],i,j,b,c=0,d,m,n;        //b?????c?????d????????
         scanf("%d,%d",&m,&n);
        for(i=0;i<m;i++)
             for(j=0;j<n;j++)
                 scanf("%d",&a[i][j]);        //????
         for(i=0;i<m;i++)                //?????????
             for(j=0;j<n;j++)            //?????????
            {
                 b=1;                    //?????????????b?1
                 for(d=0;d<n;d++)        //????????
                    if(a[i][j]<a[i][d]) b=0;
                 if(b==0) continue;
                 for(d=0;d<m;d++)        //????????
                     if(a[i][j]>a[d][j]) b=0;
                 if(b==0) continue;
                 c++;
                 printf("%d+%d\n",i,j);
             }
         if(c==0)printf("No");
  
     }while(ctu==1);
     return 0;
 }