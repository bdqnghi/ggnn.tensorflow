int main()
{   
    int i,j,n;
    struct point 
    {
           int m,x,y;
           }a[100000],aa;
           scanf ("%d",&n);
           for (i=0;i<n;i++)
           {
               scanf ("%d%d%d",&a[i].m,&a[i].x,&a[i].y);
               }
           for(i=0;i<3;i++)
           {
                           for (j=i+1;j<n;j++)
                           {
                               if ((a[i].x+a[i].y)<(a[j].x+a[j].y))
                               {
                                   aa=a[j];
                                   a[j]=a[i];
                                   a[i]=aa;
                                   }
                                   }
                                   }
                                   for (i=0;i<3;i++)
                                   {
                                       printf ("%d %d\n",a[i].m,(a[i].x+a[i].y));
                                       }
                               
                                       return 0;
                                       }