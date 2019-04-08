main ()
{
     int a,b,c,d,i,j,l,m;
     scanf("%d",&a);
     int f[a];
     int h[a];
     int n[a];
     int k[a];
     int o[a];
     char g[a][10];
     for (i=0;i<a;i++)
     {
         scanf("%s %d",g[i],&f[i]);
     }
     j=0;
     for (i=0;i<a;i++)
     {
         if (f[i]>=60)
         {
                      h[j]=f[i];
                      k[j]=i;
                      j++;
         }
     }
     for (i=0;i<j;i++)
     {
         n[i]=i;
     }
     for (i=0;i<j;i++)
     {
         o[i]=i;
     }
     for (i=0;i<j;i++)
     {
         for (l=i+1;l<j;l++)
         {
             if (h[n[i]]<h[n[l]])
             {        
                               m=n[i];
                               n[i]=n[l];
                               n[l]=m;
                               
             }
             else if (h[n[i]]==h[n[l]] && o[n[i]]>o[n[l]])
             { 
                               m=n[i];
                               n[i]=n[l];
                               n[l]=m;
             }
         }
     }       
    for (i=0;i<j;i++)
     {
         printf("%s\n",g[k[n[i]]]);
     }
     for (i=0;i<a;i++)
     {
         if (f[i]<60)
         printf("%s\n",g[i]);
     }
     getchar ();
     getchar ();
     
}
