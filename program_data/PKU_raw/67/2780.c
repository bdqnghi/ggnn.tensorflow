int main()
{
     int n;
     scanf("%d",&n);
     int a0,b0;
     scanf("%d %d",&a0,&b0);
     double d=(double)b0/a0;
     for(int i=0;i<n-1;i++)
     {
           int a,b;
           scanf("%d %d",&a,&b);
           double c=(double)b/a;
           if(d>=c)
           {
                if(d-c>0.05) printf("worse\n");
                else printf("same\n");
           }
           else
          {
               if(c-d>0.05) printf("better\n");
               else printf("same\n");
          }
     }
}