struct paixu{
       char sex[6];
       float height;
};
typedef struct paixu Paixu;
void bubble1(Paixu*,int);
void bubble2(Paixu*,int,int);
main()
{
   Paixu a[40],b[40];
   int n,i,k=0,m;
   scanf("%d",&n);
   for(i=0;i<=n-1;i++)
   scanf("%s %f",&a[i].sex,&a[i].height);
   for(i=0;i<=n-1;i++)
   if(a[i].sex[0]=='m')
   {
                       b[k]=a[i];
                       k++;
   }
   m=k;
   for(i=0;i<=n-1;i++)
   if(a[i].sex[0]=='f')
   {
                       b[k]=a[i];
                       k++;
   }
   bubble1(b,m);
   bubble2(b,m,n);
   for(i=0;i<=n-1;i++)
   {
                      printf("%.2f",b[i].height);
                      if(i!=n-1)
                      printf(" ");
   }
}
void bubble1(Paixu b[],int m)
{
     int pass,i;
     Paixu hold;
     for(pass=1;pass<=m-1;pass++)
     for(i=0;i<=m-2;i++)
     if(b[i].height>b[i+1].height)
     {
                 hold=b[i];
                 b[i]=b[i+1];
                 b[i+1]=hold;
     }
}
void bubble2(Paixu b[],int m,int n)
{
     int pass,i;
     Paixu hold;
     for(pass=1;pass<=n-m;pass++)
     for(i=m;i<=n-2;i++)
     if(b[i].height<b[i+1].height)
     {
                 hold=b[i];
                 b[i]=b[i+1];
                 b[i+1]=hold;
     }
}
   
      
